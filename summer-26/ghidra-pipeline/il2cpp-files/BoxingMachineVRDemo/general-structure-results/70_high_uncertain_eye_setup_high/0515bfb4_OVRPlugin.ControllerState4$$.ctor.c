/*
FUNCTION_NAME: OVRPlugin.ControllerState4$$.ctor
ENTRY_POINT: 0515bfb4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState4___ctor(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined1 in_ZR;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long in_x9;
  ulong uVar8;
  int *in_x10;
  int *piVar9;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long *unaff_x25;
  undefined8 *unaff_x27;
  
  while (!(bool)in_ZR) {
    if (*(long *)(in_x10 + 2) == param_3) {
      puVar3 = (undefined8 *)(param_1 + (long)in_x10[4] * 0x10 + 0x138);
      goto LAB_0515bfd8;
    }
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 4;
    in_ZR = in_x9 == 0;
  }
  puVar3 = (undefined8 *)FUN_02d9a5d4();
LAB_0515bfd8:
  lVar4 = (*(code *)*puVar3)();
  plVar5 = (long *)(**(code **)(*unaff_x20 + 0x3a8))();
  puVar1 = PTR_DAT_06769a28;
  uVar6 = FUN_050eb654();
  if (plVar5 != (long *)0x0) {
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *unaff_x25) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0515c070;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_02d9a5d4(plVar5,*unaff_x25,0);
LAB_0515c070:
    lVar7 = (*(code *)*puVar3)(plVar5,uVar6,puVar3[1]);
    iVar2 = (**(code **)(*unaff_x19 + 0x238))();
    if (iVar2 == 4) {
      lVar11 = 0;
      lVar10 = 0;
      do {
        plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar5 == (long *)0x0) goto LAB_0515c258;
        uVar6 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
        uVar8 = FUN_04e8bd88(uVar6,*unaff_x27,5,0);
        if ((uVar8 & 1) == 0) {
          uVar8 = FUN_04e8bd88(uVar6,*(undefined8 *)puVar1,5,0);
          if ((uVar8 & 1) == 0) {
            FUN_05098d24();
          }
          else {
            FUN_050991d4();
            if (lVar7 == 0) goto LAB_0515c258;
            lVar10 = Oculus_Platform_Message__GetUserCapabilityList();
          }
        }
        else {
          FUN_050991d4();
          if (lVar4 == 0) goto LAB_0515c258;
          lVar11 = Oculus_Platform_Message__GetUserCapabilityList();
        }
        FUN_0509917c();
        iVar2 = (**(code **)(*unaff_x19 + 0x238))();
      } while (iVar2 == 4);
    }
    else {
      lVar10 = 0;
      lVar11 = 0;
    }
    lVar4 = *(long *)(unaff_x21 + 0x10);
    plVar5 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
    if (plVar5 != (long *)0x0) {
      if ((lVar11 != 0) &&
         (lVar7 = thunk_FUN_02d9d438(lVar11,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
LAB_0515c260:
        uVar6 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar6,0);
      }
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar11;
        thunk_FUN_02dd37b4(plVar5 + 4,lVar11);
        if ((lVar10 != 0) &&
           (lVar7 = thunk_FUN_02d9d438(lVar10,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0))
        goto LAB_0515c260;
        if (1 < *(uint *)(plVar5 + 3)) {
          plVar5[5] = lVar10;
          thunk_FUN_02dd37b4(plVar5 + 5,lVar10);
          if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),plVar5,*(undefined8 *)(lVar4 + 0x28));
            return;
          }
          goto LAB_0515c258;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02d60af0();
    }
  }
LAB_0515c258:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


