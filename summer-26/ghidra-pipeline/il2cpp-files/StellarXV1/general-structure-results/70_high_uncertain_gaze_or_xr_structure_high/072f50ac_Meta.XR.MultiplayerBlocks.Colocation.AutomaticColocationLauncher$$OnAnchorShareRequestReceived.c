/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher$$OnAnchorShareRequestReceived
ENTRY_POINT: 072f50ac
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MultiplayerBlocks_Colocation_AutomaticColocationLauncher__OnAnchorShareRequestReceived
               (void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  undefined4 *unaff_x19;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  long *unaff_x23;
  undefined4 uStack0000000000000004;
  
  plVar7 = *(long **)(unaff_x22 + 0x60);
  plVar1 = (long *)FUN_04077674(*(undefined8 *)PTR_DAT_09287040,1);
  uStack0000000000000004 = *(undefined4 *)(unaff_x22 + 0x20);
  lVar2 = thunk_FUN_040b4b34(*(undefined8 *)PTR_DAT_092c4788,&stack0x00000004);
  if (plVar1 != (long *)0x0) {
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_040b4e00(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
      uVar8 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar8,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    plVar1[4] = lVar2;
    thunk_FUN_040ec700(plVar1 + 4,lVar2);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
      uVar8 = *(undefined8 *)PTR_DAT_092c49d0;
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_092b9200) {
            puVar4 = (undefined8 *)(lVar2 + (long)(*piVar6 + 0xc) * 0x10 + 0x138);
            goto FUN_072f5184;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_092b9200,0xc);
FUN_072f5184:
      (*(code *)*puVar4)(plVar7,uVar8,plVar1,puVar4[1]);
      lVar2 = *unaff_x23;
      *unaff_x19 = 0xfffffffe;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
      }
      FUN_0759053c(unaff_x19 + 2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


