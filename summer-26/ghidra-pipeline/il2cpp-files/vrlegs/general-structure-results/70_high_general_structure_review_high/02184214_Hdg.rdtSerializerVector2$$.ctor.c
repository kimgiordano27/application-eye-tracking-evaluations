/*
FUNCTION_NAME: Hdg.rdtSerializerVector2$$.ctor
ENTRY_POINT: 02184214
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_2
*/


void Hdg_rdtSerializerVector2___ctor(void *param_1,int param_2,size_t param_3)

{
  long lVar1;
  void *__src;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  size_t unaff_x23;
  void *unaff_x25;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  memset(param_1,param_2,param_3);
  if (unaff_x22 == 0) {
    lVar1 = *(long *)(unaff_x28 + 0x10);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_01a46ff8();
    }
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_02182f6c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68));
  }
  else {
    if ((*(byte *)(unaff_x27 + 0x135) & 1) == 0) {
      FUN_01a46ff8();
    }
    lVar1 = thunk_FUN_01a89d6c();
    if (lVar1 != 0) {
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x88);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        FUN_01a46ff8(lVar1);
      }
      __src = (void *)FUN_01ab6b38();
      memcpy(unaff_x25,__src,unaff_x23);
      lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        FUN_01a46ff8(lVar1);
      }
      puVar2 = (undefined8 *)FUN_01ab6b38();
      memcpy(unaff_x21,unaff_x25,unaff_x23);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      lVar1 = *(long *)(lVar5 + 0x220);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_01a46ff8(lVar1);
        lVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0);
      }
      if (-1 < *(int *)(*(long *)(lVar5 + 0x60) + 0x28)) {
        puVar2 = (undefined8 *)*puVar2;
      }
      if (-1 < *(int *)(*(long *)(lVar5 + 0x88) + 0x28)) {
        unaff_x21 = (undefined8 *)*unaff_x21;
      }
      lVar5 = *unaff_x20;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar1) {
            lVar1 = lVar5 + (long)(*piVar7 + 5) * 0x10 + 0x138;
            goto LAB_02184358;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      lVar1 = FUN_01a472ec();
LAB_02184358:
      *(undefined8 **)(unaff_x29 + -0x18) = puVar2;
      *(undefined8 **)(unaff_x29 + -0x10) = unaff_x21;
      (**(code **)(*(long *)(lVar1 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
      if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) == *(long *)(unaff_x29 + -8)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  thunk_FUN_01a6ca08(PTR_DAT_03cbdfd0);
  uVar3 = thunk_FUN_01a89e68();
  uVar4 = thunk_FUN_01a6ca08(PTR_DAT_03cdb3d8);
  FUN_026b274c(uVar3,uVar4,0);
                    /* WARNING: Subroutine does not return */
  FUN_01ab6b14(uVar3);
}


