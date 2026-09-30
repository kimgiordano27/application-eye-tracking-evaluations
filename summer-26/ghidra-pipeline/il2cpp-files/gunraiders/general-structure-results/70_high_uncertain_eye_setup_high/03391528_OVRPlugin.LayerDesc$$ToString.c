/*
FUNCTION_NAME: OVRPlugin.LayerDesc$$ToString
ENTRY_POINT: 03391528
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_LayerDesc__ToString(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar6;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xa00));
  FUN_01c5d288(
              Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__
              );
  FUN_01c5d288(System_MonoCustomAttrs_TypeInfo);
  FUN_01c5d288(PTR_DAT_04230910);
  FUN_01c5d288(PTR_DAT_0422fb28);
  *(undefined1 *)(unaff_x20 + 0x68a) = 1;
  puVar1 = PTR_DAT_0422fb28;
  lVar2 = *(long *)(unaff_x19 + 0xf8);
  if (lVar2 != 0) goto LAB_03391700;
  uVar6 = *(undefined8 *)System_ComponentModel_ListSortDescription_TypeInfo;
  if (*(int *)(*(long *)PTR_DAT_0422fb28 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  plVar3 = (long *)FUN_032e04b8(uVar6,0);
  plVar4 = (long *)FUN_01c5d2fc(*(undefined8 *)PTR_DAT_04230910,2);
  lVar2 = *(long *)(unaff_x19 + 200);
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar2 = FUN_032e04b8(uVar6,0);
  }
  if (plVar4 == (long *)0x0) goto LAB_03391744;
  if ((lVar2 != 0) &&
     (lVar5 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0))
  goto LAB_0339174c;
  if ((int)plVar4[3] == 0) goto LAB_03391748;
  plVar4[4] = lVar2;
  lVar2 = *(long *)(unaff_x19 + 0xd0);
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)System_MonoCustomAttrs_TypeInfo;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar2 = FUN_032e04b8(uVar6,0);
    if (lVar2 != 0) goto LAB_03391654;
  }
  else {
LAB_03391654:
    lVar5 = thunk_FUN_01c495e4(lVar2,*(undefined8 *)(*plVar4 + 0x40));
    if (lVar5 == 0) {
LAB_0339174c:
      uVar6 = thunk_FUN_01c58458();
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar6,0);
    }
  }
  if (*(uint *)(plVar4 + 3) < 2) {
LAB_03391748:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4ac();
  }
  plVar4[5] = lVar2;
  if (plVar3 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar3 + 0x8f8))(plVar3,plVar4,*(undefined8 *)(*plVar3 + 0x900));
    if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo);
    }
    plVar3 = (long *)FUN_033a78fc(0);
    if (plVar3 != (long *)0x0) {
      lVar2 = thunk_FUN_01bedf90(*(undefined8 *)
                                  (*plVar3 + (ulong)*(ushort *)
                                                     (*(long *)
                                                  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_bool>_MoveNext__
                                                  + 0x50) * 0x10 + 0x140));
      lVar2 = (**(code **)(lVar2 + 8))(plVar3,uVar6,lVar2);
      *(long *)(unaff_x19 + 0xf8) = lVar2;
      if (lVar2 != 0) {
LAB_03391700:
        lVar2 = (**(code **)(lVar2 + 0x18))
                          (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
        if (lVar2 != 0) {
          uVar6 = *(undefined8 *)System_Security_Cryptography_CryptoConfig_TypeInfo;
          lVar5 = thunk_FUN_01c495e4(lVar2,uVar6);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01c5d748(lVar2,uVar6);
          }
        }
        return;
      }
    }
  }
LAB_03391744:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


