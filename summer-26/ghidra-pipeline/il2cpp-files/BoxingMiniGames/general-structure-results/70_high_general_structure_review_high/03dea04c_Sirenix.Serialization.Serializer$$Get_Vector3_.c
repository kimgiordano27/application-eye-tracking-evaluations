/*
FUNCTION_NAME: Sirenix.Serialization.Serializer$$Get<Vector3>
ENTRY_POINT: 03dea04c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void Sirenix_Serialization_Serializer__Get<Vector3>
               (long param_1,undefined8 param_2,undefined8 param_3,size_t param_4)

{
  void *__src;
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  size_t unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar10;
  long unaff_x26;
  void *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  puVar10 = (undefined8 *)(&stack0x00000000 + -(unaff_x22 + 0xf & 0x1fffffff0));
  if (-1 < *(int *)(param_1 + 0x28)) {
    unaff_x28 = (void *)(unaff_x29 + -0x48);
  }
  memcpy(unaff_x23,unaff_x28,param_4);
  if (-1 < *(int *)(unaff_x20 + 0x28)) {
    unaff_x27 = (void *)(unaff_x29 + -0x50);
  }
  memcpy(unaff_x24,unaff_x27,unaff_x21);
  __src = *(void **)(unaff_x29 + -0x88);
  if (-1 < *(int *)(unaff_x26 + 0x28)) {
    __src = (void *)(unaff_x29 + -0x58);
  }
  memcpy(puVar10,__src,unaff_x22);
  lVar2 = *(long *)(unaff_x19 + 0x38);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
  }
  lVar7 = *(long *)(unaff_x29 + -0x70);
  plVar1 = *(long **)(unaff_x29 + -0x68);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  lVar5 = *(long *)(lVar7 + 0x38);
  lVar2 = *(long *)(lVar5 + 0x38);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc();
    lVar5 = *(long *)(lVar7 + 0x38);
  }
  puVar4 = *(undefined8 **)(lVar5 + 0x48);
  if (-1 < *(int *)(*(long *)(lVar5 + 8) + 0x28)) {
    unaff_x23 = (undefined8 *)*unaff_x23;
  }
  uVar3 = *puVar4;
  if (-1 < *(int *)(*(long *)(lVar5 + 0x10) + 0x28)) {
    unaff_x24 = (undefined8 *)*unaff_x24;
  }
  if (-1 < *(int *)(*(long *)(lVar5 + 0x18) + 0x28)) {
    puVar10 = (undefined8 *)*puVar10;
  }
  *(undefined8 *)(unaff_x29 + -0x20) = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  *(undefined8 **)(unaff_x29 + -0x30) = puVar10;
  *(undefined8 *)(unaff_x29 + -0x28) = *(undefined8 *)(unaff_x29 + -0x80);
  *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x78);
  pcVar6 = (code *)puVar4[2];
  *(undefined8 **)(unaff_x29 + -0x40) = unaff_x23;
  *(undefined8 **)(unaff_x29 + -0x38) = unaff_x24;
  (*pcVar6)(uVar3,puVar4,0,unaff_x29 + -0x40,unaff_x29 + -0x10);
  if (plVar1 == (long *)0x0) {
    if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x29 + -0x10);
    lVar2 = **(long **)(lVar7 + 0x38);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    lVar7 = *plVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar2) {
          puVar10 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03dea1d0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar10 = (undefined8 *)FUN_0367cd30(plVar1,lVar2,0);
LAB_03dea1d0:
    (*(code *)*puVar10)(plVar1,uVar3,puVar10[1]);
    if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


