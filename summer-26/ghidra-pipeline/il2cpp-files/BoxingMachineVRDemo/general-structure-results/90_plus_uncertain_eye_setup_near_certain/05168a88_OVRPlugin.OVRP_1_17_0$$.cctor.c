/*
FUNCTION_NAME: OVRPlugin.OVRP_1_17_0$$.cctor
ENTRY_POINT: 05168a88
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_8;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_17_0___cctor(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  do {
    thunk_FUN_02dbd7b4();
    do {
      lVar3 = FUN_05167dbc();
      lVar8 = *unaff_x21;
LAB_05168a9c:
      uVar4 = (**(code **)(lVar8 + 0x288))();
      if (((uVar4 & 1) == 0) || (iVar1 = (**(code **)(*unaff_x21 + 0x238))(), iVar1 == 0xd)) {
        if (lVar3 == 0) {
          thunk_FUN_02dc61f4(PTR_DAT_06782700);
LAB_05168cbc:
          uVar6 = FUN_050924a8();
          uVar7 = thunk_FUN_02dc61f4(PTR_DAT_06782708);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar6,uVar7);
        }
        if (unaff_x20 == (long *)0x0) goto LAB_05168cac;
        lVar3 = *unaff_x20;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 == 0) goto LAB_05168be8;
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        goto LAB_05168bd0;
      }
      plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
      if (plVar2 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        if (plVar2 == (long *)0x0) goto LAB_05168cac;
        uVar6 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
      }
      uVar4 = thunk_FUN_04e8bd3c(uVar6,*unaff_x28,0);
      if ((uVar4 & 1) == 0) {
        uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06782590,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06782570,0);
          if ((uVar4 & 1) == 0) {
            uVar4 = thunk_FUN_04e8bd3c(uVar6,*(undefined8 *)PTR_DAT_06782568,0);
            if ((uVar4 & 1) == 0) {
              plVar2 = (long *)(**(code **)(*unaff_x21 + 0x248))();
              uVar6 = thunk_FUN_02dc61f4(PTR_DAT_067826f8);
              if (plVar2 == (long *)0x0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
              }
              FUN_04e83184(uVar6,uVar7,0);
              goto LAB_05168cbc;
            }
            FUN_0509917c();
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05167dbc();
            lVar8 = *unaff_x21;
          }
          else {
            FUN_0509917c();
            if (*(int *)(*unaff_x29 + 0xe4) == 0) {
              thunk_FUN_02dbd7b4();
            }
            FUN_05167dbc();
            lVar8 = *unaff_x21;
          }
        }
        else {
          FUN_0509917c();
          if (*(int *)(*unaff_x29 + 0xe4) == 0) {
            thunk_FUN_02dbd7b4();
          }
          FUN_05167dbc();
          lVar8 = *unaff_x21;
        }
        goto LAB_05168a9c;
      }
      FUN_0509917c();
    } while (*(int *)(*unaff_x29 + 0xe4) != 0);
  } while( true );
  while( true ) {
    uVar4 = uVar4 - 1;
    piVar9 = piVar9 + 4;
    if (uVar4 == 0) break;
LAB_05168bd0:
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_06782640) {
      puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 6) * 0x10 + 0x138);
      goto OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus;
    }
  }
LAB_05168be8:
  puVar5 = (undefined8 *)FUN_02d9a5d4();
OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus:
  (*(code *)*puVar5)();
  if (unaff_x19 == (long *)0x0) {
LAB_05168cac:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar3 = *unaff_x19;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_067823f0) {
        puVar5 = (undefined8 *)(lVar3 + (long)(*piVar9 + 7) * 0x10 + 0x138);
        goto OVRPlugin_OVRP_1_18_0___cctor;
      }
      uVar4 = uVar4 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar4 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4();
OVRPlugin_OVRP_1_18_0___cctor:
                    /* WARNING: Could not recover jumptable at 0x05168ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)();
  return;
}


