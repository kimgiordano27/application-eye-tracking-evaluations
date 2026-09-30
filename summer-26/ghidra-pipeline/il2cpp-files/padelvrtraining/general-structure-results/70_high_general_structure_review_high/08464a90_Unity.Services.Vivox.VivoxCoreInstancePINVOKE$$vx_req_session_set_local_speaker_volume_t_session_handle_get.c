/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_set_local_speaker_volume_t_session_handle_get
ENTRY_POINT: 08464a90
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_5;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


undefined8
Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_set_local_speaker_volume_t_session_handle_get
          (void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long *plVar10;
  
  FUN_03d2d2b0(PTR_DAT_0927d4e0);
  *(undefined1 *)(unaff_x20 + 0xebf) = 1;
  lVar4 = thunk_FUN_03d2ef40(*unaff_x21);
  FUN_071bc31c(lVar4,0);
  puVar2 = PTR_DAT_0927d4a8;
  if (unaff_x19 != (long *)0x0) {
    lVar7 = *unaff_x19;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0927d4a8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_08464b14;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03d8f370();
LAB_08464b14:
    iVar3 = (*(code *)*puVar5)();
    puVar1 = PTR_DAT_091a5df0;
    if (iVar3 == 2) {
      if (*(int *)(*(long *)PTR_DAT_091a5df0 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if (DAT_09837bb8 == '\0') {
        FUN_03d2d2b0(PTR_DAT_091a5df0);
        DAT_09837bb8 = '\x01';
      }
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_03db619c();
        lVar4 = *(long *)puVar1;
      }
      return *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x30);
    }
    lVar7 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_DAT_091af510);
    FUN_062fc290(lVar7,*(undefined8 *)PTR_DAT_091af500);
    if (lVar4 != 0) {
      plVar10 = (long *)(lVar4 + 0x10);
      *plVar10 = lVar7;
      thunk_FUN_03d1023c(plVar10,lVar7);
      lVar7 = *unaff_x19;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_08464c08;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)FUN_03d8f370();
LAB_08464c08:
      uVar8 = (*(code *)*puVar5)();
      if ((uVar8 & 1) == 0) {
        uVar6 = thunk_FUN_03d2ef40(*(undefined8 *)PTR_StringLiteral_51712_0927d498);
        FUN_06af096c(uVar6,lVar4,*(undefined8 *)PTR_DAT_0927d4e8,0);
        lVar4 = *unaff_x19;
        uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_08464ca4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar5 = (undefined8 *)FUN_03d8f370();
LAB_08464ca4:
        (*(code *)*puVar5)();
      }
      else {
        FUN_08464cdc(lVar4);
      }
      if (*plVar10 != 0) {
        return *(undefined8 *)(*plVar10 + 0x10);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


