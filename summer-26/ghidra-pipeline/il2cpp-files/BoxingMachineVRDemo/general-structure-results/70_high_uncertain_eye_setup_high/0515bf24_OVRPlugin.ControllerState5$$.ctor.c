/*
FUNCTION_NAME: OVRPlugin.ControllerState5$$.ctor
ENTRY_POINT: 0515bf24
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState5___ctor(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *unaff_x19;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  
  if ((((*param_1 != 0) && (lVar5 = FUN_04317438(), unaff_x20 != (long *)0x0)) &&
      (plVar6 = (long *)(**(code **)(*unaff_x20 + 0x3a8))(), puVar1 = PTR_DAT_06769a20, lVar5 != 0))
     && (uVar7 = FUN_050eb654(lVar5,*(undefined8 *)PTR_DAT_06769a20,0), puVar3 = PTR_DAT_06780300,
        plVar6 != (long *)0x0)) {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_06780300) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0515bfd8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)PTR_DAT_06780300,0);
LAB_0515bfd8:
    lVar9 = (*(code *)*puVar8)(plVar6,uVar7,puVar8[1]);
    plVar6 = (long *)(**(code **)(*unaff_x20 + 0x3a8))();
    puVar2 = PTR_DAT_06769a28;
    uVar7 = FUN_050eb654(lVar5,*(undefined8 *)PTR_DAT_06769a28,0);
    if (plVar6 != (long *)0x0) {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0515c070;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar6,*(long *)puVar3,0);
LAB_0515c070:
      lVar10 = (*(code *)*puVar8)(plVar6,uVar7,puVar8[1]);
      iVar4 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar4 == 4) {
        lVar14 = 0;
        lVar13 = 0;
        do {
          plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar6 == (long *)0x0) goto LAB_0515c258;
          uVar7 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
          uVar11 = FUN_04e8bd88(uVar7,*(undefined8 *)puVar1,5,0);
          if ((uVar11 & 1) == 0) {
            uVar11 = FUN_04e8bd88(uVar7,*(undefined8 *)puVar2,5,0);
            if ((uVar11 & 1) == 0) {
              FUN_05098d24();
            }
            else {
              FUN_050991d4();
              if (lVar10 == 0) goto LAB_0515c258;
              lVar13 = Oculus_Platform_Message__GetUserCapabilityList();
            }
          }
          else {
            FUN_050991d4();
            if (lVar9 == 0) goto LAB_0515c258;
            lVar14 = Oculus_Platform_Message__GetUserCapabilityList();
          }
          FUN_0509917c();
          iVar4 = (**(code **)(*unaff_x19 + 0x238))();
        } while (iVar4 == 4);
      }
      else {
        lVar13 = 0;
        lVar14 = 0;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      plVar6 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
      if (plVar6 != (long *)0x0) {
        if ((lVar14 != 0) &&
           (lVar9 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0)) {
LAB_0515c260:
          uVar7 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar7,0);
        }
        if ((int)plVar6[3] != 0) {
          plVar6[4] = lVar14;
          thunk_FUN_02dd37b4(plVar6 + 4,lVar14);
          if ((lVar13 != 0) &&
             (lVar9 = thunk_FUN_02d9d438(lVar13,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0))
          goto LAB_0515c260;
          if (1 < *(uint *)(plVar6 + 3)) {
            plVar6[5] = lVar13;
            thunk_FUN_02dd37b4(plVar6 + 5,lVar13);
            if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),plVar6,*(undefined8 *)(lVar5 + 0x28));
              return;
            }
            goto LAB_0515c258;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_02d60af0();
      }
    }
  }
LAB_0515c258:
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


