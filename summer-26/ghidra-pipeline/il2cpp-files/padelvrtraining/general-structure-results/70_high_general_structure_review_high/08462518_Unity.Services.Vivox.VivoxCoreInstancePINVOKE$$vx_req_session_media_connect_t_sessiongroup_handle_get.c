/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_session_media_connect_t_sessiongroup_handle_get
ENTRY_POINT: 08462518
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_session_media_connect_t_sessiongroup_handle_get
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long in_x9;
  ulong uVar6;
  long in_x10;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *plVar8;
  long *unaff_x23;
  
  piVar7 = (int *)(in_x10 + 8);
  do {
    if (*(long *)(piVar7 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_08462550;
    }
    in_x9 = in_x9 + -1;
    piVar7 = piVar7 + 4;
  } while (in_x9 != 0);
  puVar1 = (undefined8 *)FUN_03d8f370();
LAB_08462550:
  uVar2 = (*(code *)*puVar1)();
  plVar8 = *(long **)(unaff_x19 + 0x18);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_084625b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar1 = (undefined8 *)FUN_03d8f370(plVar8,*unaff_x23,0);
LAB_084625b4:
    uVar3 = (*(code *)*puVar1)(plVar8,puVar1[1]);
    uVar6 = FUN_06fd246c(uVar2,0);
    if ((uVar6 & 1) == 0) {
      *unaff_x20 = uVar2;
    }
    else {
      uVar6 = FUN_06fd246c(uVar3,0);
      if ((uVar6 & 1) == 0) {
        *unaff_x20 = uVar3;
      }
      else {
        FUN_0717040c(0);
        uVar4 = FUN_0717264c();
        *unaff_x20 = uVar4;
      }
    }
    thunk_FUN_03d1023c();
    FUN_084627b4(*unaff_x20);
    uVar6 = FUN_06fd246c(uVar2,0);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(unaff_x19 + 0x20);
      if (plVar8 == (long *)0x0) goto LAB_08462740;
      lVar5 = *plVar8;
      uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_084626a0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_03d8f370(plVar8,*unaff_x23,1);
LAB_084626a0:
      (*(code *)*puVar1)(plVar8,uVar2,puVar1[1]);
    }
    uVar6 = FUN_06fd246c(uVar3,0);
    if ((uVar6 & 1) != 0) {
      plVar8 = *(long **)(unaff_x19 + 0x18);
      if (plVar8 == (long *)0x0) goto LAB_08462740;
      lVar5 = *plVar8;
      uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *unaff_x23) {
            puVar1 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_0846271c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar1 = (undefined8 *)FUN_03d8f370(plVar8,*unaff_x23,1);
LAB_0846271c:
      (*(code *)*puVar1)(plVar8,uVar2,puVar1[1]);
    }
    return;
  }
LAB_08462740:
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


