/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.fsDirectConverter<Ray>$$.ctor
ENTRY_POINT: 06a9e970
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_fsDirectConverter<Ray>___ctor(long param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long in_x9;
  ulong uVar7;
  code *pcVar8;
  long *unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  undefined8 *unaff_x23;
  void *__s;
  long *plVar9;
  long unaff_x26;
  long *unaff_x27;
  long unaff_x29;
  
  __s = (void *)(param_1 - in_x9);
  memset(__s,0,unaff_x21);
  piVar1 = (int *)thunk_FUN_03f70400();
  if (*piVar1 == 2) {
LAB_06a9ea8c:
    do {
      puVar2 = (undefined8 *)thunk_FUN_03f70400();
      plVar9 = (long *)*puVar2;
      if (plVar9 == (long *)0x0) goto LAB_06a9ecc4;
      lVar4 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar1 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar1 + -2) == *unaff_x27) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar1 * 0x10 + 0x138);
            goto LAB_06a9eafc;
          }
          uVar7 = uVar7 - 1;
          piVar1 = piVar1 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f4b594(plVar9,*unaff_x27,0);
LAB_06a9eafc:
      puVar2 = (undefined8 *)(*(code *)*puVar2)(plVar9,puVar2[1]);
      if (((ulong)puVar2 & 1) == 0) {
        if (unaff_x19 == (long *)0x0) goto LAB_06a9ecc4;
        (**(code **)(*unaff_x19 + 0x1f8))();
        puVar2 = (undefined8 *)0x0;
        goto LAB_06a9ec94;
      }
      puVar2 = (undefined8 *)thunk_FUN_03f70400();
      plVar9 = (long *)*puVar2;
      if (plVar9 == (long *)0x0) goto LAB_06a9ecc4;
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f4b260(lVar4);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar1 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar1 + -2) == lVar4) {
            lVar4 = lVar6 + (long)*piVar1 * 0x10 + 0x138;
            goto LAB_06a9eb9c;
          }
          uVar7 = uVar7 - 1;
          piVar1 = piVar1 + 4;
        } while (uVar7 != 0);
      }
      lVar4 = FUN_03f4b594(plVar9,lVar4,0);
LAB_06a9eb9c:
      lVar4 = *(long *)(lVar4 + 8);
      *(void **)(unaff_x29 + -0x18) = unaff_x22;
      (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,unaff_x29 + -0x18);
      memcpy(__s,unaff_x22,unaff_x21);
      plVar9 = (long *)thunk_FUN_03f70400();
      lVar4 = *plVar9;
      puVar2 = memcpy(unaff_x23,__s,unaff_x21);
      if (lVar4 == 0) goto LAB_06a9ecc4;
      lVar6 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
      puVar2 = unaff_x23;
      if (-1 < *(int *)(*(long *)(lVar6 + 0x58) + 0x28)) {
        puVar2 = (undefined8 *)*unaff_x23;
      }
      puVar5 = *(undefined8 **)(lVar6 + 0x60);
      uVar3 = *puVar5;
      pcVar8 = (code *)puVar5[2];
      *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
      (*pcVar8)(uVar3,puVar5,lVar4,unaff_x29 + -0x18,unaff_x29 + -0xc);
    } while (*(char *)(unaff_x29 + -0xc) == '\0');
    memcpy(unaff_x22,__s,unaff_x21);
    FUN_03f133ac();
    puVar2 = (undefined8 *)0x1;
  }
  else {
    puVar2 = (undefined8 *)0x0;
    if (*piVar1 == 1) {
      puVar2 = (undefined8 *)thunk_FUN_03f70400();
      plVar9 = (long *)*puVar2;
      if (plVar9 == (long *)0x0) {
LAB_06a9ecc4:
        if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f1362c();
        }
        goto LAB_06a9ecd8;
      }
      lVar4 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_03f4b260(lVar4);
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar1 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar1 + -2) == lVar4) {
            puVar2 = (undefined8 *)(lVar6 + (long)*piVar1 * 0x10 + 0x138);
            goto LAB_06a9ea40;
          }
          uVar7 = uVar7 - 1;
          piVar1 = piVar1 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f4b594(plVar9,lVar4,0);
LAB_06a9ea40:
      (*(code *)*puVar2)(plVar9,puVar2[1]);
      FUN_03962b9c();
      FUN_03962e94();
      goto LAB_06a9ea8c;
    }
  }
LAB_06a9ec94:
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
LAB_06a9ecd8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2);
}


