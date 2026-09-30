/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$.cctor
ENTRY_POINT: 01db9e00
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_71_0___cctor(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  byte bVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x23;
  long *unaff_x26;
  long *unaff_x27;
  int unaff_w28;
  long *unaff_x29;
  
code_r0x01db9e00:
  puVar4 = (undefined8 *)FUN_0103c348(param_1,param_2,param_3);
  param_1 = unaff_x23;
  do {
    uVar5 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if ((uVar5 & 1) == 0) goto LAB_01db9e70;
    uVar6 = thunk_FUN_010400dc(*(undefined8 *)PTR_DAT_0235a768);
    FUN_01dbb700(uVar6,param_1);
    FUN_01dab44c(uVar6,0);
    while( true ) {
      while( true ) {
        while( true ) {
          do {
            unaff_w22 = unaff_w22 + 1;
            if (unaff_w22 == unaff_w28) {
              if (DAT_0247da80 == '\0') {
                FUN_00fdc2e4(PTR_DAT_0234bc90);
                DAT_0247da80 = '\x01';
              }
              if (*(int *)(*(long *)PTR_DAT_0234bc90 + 0xe0) == 0) {
                thunk_FUN_01022c14();
              }
              return;
            }
            plVar3 = (long *)FUN_018985f8();
          } while (plVar3 == (long *)0x0);
          FUN_01898668();
          lVar7 = *plVar3;
          plVar1 = plVar3;
          if (lVar7 != *unaff_x29) {
            plVar1 = (long *)0x0;
          }
          if (plVar1 == (long *)0x0) break;
          lVar7 = *unaff_x27;
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_01022c14();
            lVar7 = *unaff_x27;
          }
          uVar6 = FUN_00fdc2fc(lVar7);
          OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingSupported(plVar1,unaff_w21,uVar6);
        }
        bVar2 = *(byte *)(*(long *)PTR_DAT_0235a790 + 0x130);
        if ((*(byte *)(lVar7 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_0235a790))
        break;
        (**(code **)(lVar7 + 0x178))(plVar3);
      }
      lVar7 = *unaff_x26;
      param_1 = (long *)thunk_FUN_0103ffe0(plVar3,lVar7);
      if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc8d0(plVar3,lVar7);
      }
      if (unaff_w21 == 0) break;
LAB_01db9e70:
      lVar7 = *param_1;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_01db9ebc;
          }
          uVar5 = uVar5 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_0103c348(param_1,*unaff_x26,0);
LAB_01db9ebc:
      (*(code *)*puVar4)(param_1);
    }
    lVar7 = *param_1;
    param_2 = *unaff_x26;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 == 0) break;
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != param_2) {
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
      if (uVar5 == 0) goto LAB_01db9df8;
    }
    puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
  } while( true );
LAB_01db9df8:
  param_3 = 1;
  unaff_x23 = param_1;
  goto code_r0x01db9e00;
}


