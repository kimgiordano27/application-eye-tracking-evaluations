/*
FUNCTION_NAME: OVRPlugin.ControllerState6$$.ctor
ENTRY_POINT: 0515be5c
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


undefined8 OVRPlugin_ControllerState6___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long lVar14;
  long lVar15;
  
  iVar4 = (**(code **)(*unaff_x19 + 0x238))();
  if (iVar4 == 0xb) {
    if (*(int *)(*(long *)PTR_DAT_067680c0 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar5 = FUN_050d9e5c();
    if ((uVar5 & 1) == 0) {
      thunk_FUN_02dc61f4(PTR_DAT_06782250);
      uVar9 = FUN_050924a8();
      uVar10 = thunk_FUN_02dc61f4(PTR_DAT_06782258);
                    /* WARNING: Subroutine does not return */
      FUN_02d609b4(uVar9,uVar10);
    }
    return 0;
  }
  FUN_0509917c();
  if (*(int *)(*(long *)PTR_DAT_067680c0 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar5 = FUN_050d9e5c();
  if ((uVar5 & 1) != 0) {
    unaff_x21 = FUN_0500971c();
  }
  puVar1 = PTR_DAT_0677ffd0;
  lVar6 = *(long *)PTR_DAT_0677ffd0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar6 = *(long *)puVar1;
  }
  if ((((**(long **)(lVar6 + 0xb8) != 0) &&
       (lVar6 = FUN_04317438(**(long **)(lVar6 + 0xb8),unaff_x21,*(undefined8 *)PTR_DAT_06782248),
       unaff_x20 != (long *)0x0)) &&
      (plVar7 = (long *)(**(code **)(*unaff_x20 + 0x3a8))(), puVar1 = PTR_DAT_06769a20, lVar6 != 0))
     && (uVar9 = FUN_050eb654(lVar6,*(undefined8 *)PTR_DAT_06769a20,0), puVar3 = PTR_DAT_06780300,
        plVar7 != (long *)0x0)) {
    lVar11 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar5 != 0) {
      piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_06780300) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0515bfd8;
        }
        uVar5 = uVar5 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)PTR_DAT_06780300,0);
LAB_0515bfd8:
    lVar11 = (*(code *)*puVar8)(plVar7,uVar9,puVar8[1]);
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x3a8))();
    puVar2 = PTR_DAT_06769a28;
    uVar9 = FUN_050eb654(lVar6,*(undefined8 *)PTR_DAT_06769a28,0);
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar5 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0515c070;
          }
          uVar5 = uVar5 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar5 != 0);
      }
      puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar3,0);
LAB_0515c070:
      lVar12 = (*(code *)*puVar8)(plVar7,uVar9,puVar8[1]);
      iVar4 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar4 == 4) {
        lVar15 = 0;
        lVar14 = 0;
        do {
          plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
          if (plVar7 == (long *)0x0) goto LAB_0515c258;
          uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          uVar5 = FUN_04e8bd88(uVar9,*(undefined8 *)puVar1,5,0);
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_04e8bd88(uVar9,*(undefined8 *)puVar2,5,0);
            if ((uVar5 & 1) == 0) {
              FUN_05098d24();
            }
            else {
              FUN_050991d4();
              if (lVar12 == 0) goto LAB_0515c258;
              lVar14 = Oculus_Platform_Message__GetUserCapabilityList();
            }
          }
          else {
            FUN_050991d4();
            if (lVar11 == 0) goto LAB_0515c258;
            lVar15 = Oculus_Platform_Message__GetUserCapabilityList();
          }
          FUN_0509917c();
          iVar4 = (**(code **)(*unaff_x19 + 0x238))();
        } while (iVar4 == 4);
      }
      else {
        lVar14 = 0;
        lVar15 = 0;
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      plVar7 = (long *)FUN_02d60934(*(undefined8 *)PTR_DAT_0675e2d0,2);
      if (plVar7 != (long *)0x0) {
        if ((lVar15 != 0) &&
           (lVar11 = thunk_FUN_02d9d438(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0)) {
LAB_0515c260:
          uVar9 = thunk_FUN_02daa0c0();
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar9,0);
        }
        if ((int)plVar7[3] != 0) {
          plVar7[4] = lVar15;
          thunk_FUN_02dd37b4(plVar7 + 4,lVar15);
          if ((lVar14 != 0) &&
             (lVar11 = thunk_FUN_02d9d438(lVar14,*(undefined8 *)(*plVar7 + 0x40)), lVar11 == 0))
          goto LAB_0515c260;
          if (1 < *(uint *)(plVar7 + 3)) {
            plVar7[5] = lVar14;
            thunk_FUN_02dd37b4(plVar7 + 5,lVar14);
            if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0515c254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar9 = (**(code **)(lVar6 + 0x18))
                                (*(undefined8 *)(lVar6 + 0x40),plVar7,*(undefined8 *)(lVar6 + 0x28))
              ;
              return uVar9;
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


