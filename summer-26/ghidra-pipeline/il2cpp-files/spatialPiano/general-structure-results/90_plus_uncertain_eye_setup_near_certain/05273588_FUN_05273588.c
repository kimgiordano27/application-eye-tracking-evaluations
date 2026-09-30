/*
FUNCTION_NAME: FUN_05273588
ENTRY_POINT: 05273588
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_05273588(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo;
  puVar3 = PTR_DAT_067d13f0;
                    /* try { // try from 05273594 to 0537359f has its CatchHandler @ 05273a64 */
                    /* try { // try from 052735a4 to 053735af has its CatchHandler @ 05273a60 */
  if ((DAT_06bbab49 & 1) == 0) {
    FUN_02f08768(System_Collections_Generic_List<int>___TypeInfo);
    FUN_02f08768(PTR_DAT_067cc5f0);
    FUN_02f08768(PTR_DAT_067cbae0);
    FUN_02f08768(UnityEngine_Events_UnityAction<bool>___TypeInfo);
    FUN_02f08768(System_ValueTuple<MeshFilter,_Renderer>___TypeInfo);
    FUN_02f08768(PTR_DAT_067cdd98);
    FUN_02f08768(PTR_DAT_067cdd90);
    FUN_02f08768(PTR_DAT_067d38b8);
    FUN_02f08768(System_Collections_Generic_List<ResourceHandle>___TypeInfo);
    FUN_02f08768(PTR_DAT_067d38c0);
    FUN_02f08768(PTR_DAT_067cdb68);
    FUN_02f08768(PTR_DAT_067cca10);
    FUN_02f08768(UnityEngine_Events_UnityAction<MRUKRoom>_TypeInfo);
    FUN_02f08768(PTR_DAT_067c8f20);
    FUN_02f08768(System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>___TypeInfo);
    FUN_02f08768(
                System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>___TypeInfo
                );
    FUN_02f08768(OVRPlugin_RaycastFilterHeader____TypeInfo);
    FUN_02f08768(PTR_DAT_067d13f0);
    FUN_02f08768(PTR_DAT_067ca520);
    DAT_06bbab49 = 1;
  }
  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
  FUN_060ba0e0(uVar10,0);
  uVar11 = *(undefined8 *)puVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar10;
  lVar12 = FUN_02f0880c(uVar11,4);
  if (DAT_06bbab90 == '\0') {
    FUN_02f08768(PTR_DAT_067c9860);
    DAT_06bbab90 = '\x01';
  }
  puVar3 = PTR_DAT_067c9860;
  if (lVar12 == 0) goto LAB_05273984;
  uVar1 = *(uint *)(lVar12 + 0x18);
  if (uVar1 != 0) {
    uVar10 = **(undefined8 **)(*(long *)PTR_DAT_067c9860 + 0xb8);
    *(undefined8 *)(lVar12 + 0x28) = (*(undefined8 **)(*(long *)PTR_DAT_067c9860 + 0xb8))[1];
    *(undefined8 *)(lVar12 + 0x20) = uVar10;
    if ((uVar1 & 0xfffffffe) != 0) {
      uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
      *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(*(long *)puVar3 + 0xb8))[1];
      *(undefined8 *)(lVar12 + 0x30) = uVar10;
      if (2 < uVar1) {
        uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
        *(undefined8 *)(lVar12 + 0x48) = (*(undefined8 **)(*(long *)puVar3 + 0xb8))[1];
        *(undefined8 *)(lVar12 + 0x40) = uVar10;
        puVar9 = System_ValueTuple<MeshFilter,_Renderer>___TypeInfo;
        puVar8 = UnityEngine_Events_UnityAction<bool>___TypeInfo;
        puVar7 = PTR_DAT_067cdd98;
        puVar6 = PTR_DAT_067cdd90;
        puVar5 = PTR_DAT_067cdb68;
        puVar2 = PTR_DAT_067cca10;
        puVar4 = PTR_DAT_067cbae0;
        if ((uVar1 & 0xfffffffc) != 0) {
          uVar10 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
          *(undefined8 *)(lVar12 + 0x58) = (*(undefined8 **)(*(long *)puVar3 + 0xb8))[1];
          *(undefined8 *)(lVar12 + 0x50) = uVar10;
          puVar3 = System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebOperation>___TypeInfo
          ;
          uVar10 = *(undefined8 *)puVar9;
          *(long *)(param_1 + 0x80) = lVar12;
          uVar10 = thunk_FUN_02f45270(uVar10);
          FUN_048549c8(uVar10,*(undefined8 *)puVar8);
          uVar11 = *(undefined8 *)puVar6;
          *(undefined8 *)(param_1 + 0x90) = uVar10;
          uVar10 = thunk_FUN_02f45270(uVar11);
          FUN_03724720(uVar10,*(undefined8 *)puVar7);
          uVar11 = *(undefined8 *)puVar2;
          *(undefined8 *)(param_1 + 0x98) = uVar10;
          uVar10 = thunk_FUN_02f45270(uVar11);
          FUN_03a6b958(uVar10,*(undefined8 *)puVar5);
          uVar11 = *(undefined8 *)puVar4;
          lVar12 = *(long *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0xa0) = uVar10;
          uVar10 = thunk_FUN_02f45270(uVar11);
          FUN_0475f808(uVar10,param_1,*(undefined8 *)puVar3,0);
          if (lVar12 != 0) {
            FUN_037d86bc(lVar12,uVar10,*(undefined8 *)PTR_DAT_067d38c0);
            lVar12 = *(long *)(param_1 + 0x28);
            uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
            FUN_0475f808(uVar10,param_1,*(undefined8 *)puVar3,0);
            puVar2 = PTR_DAT_067c8f20;
            if (lVar12 != 0) {
              FUN_037d86bc(lVar12,uVar10,*(undefined8 *)PTR_DAT_067d38b8);
              uVar10 = *(undefined8 *)(param_1 + 0x30);
              if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              uVar13 = FUN_060f078c(uVar10,0,0);
              if ((uVar13 & 1) != 0) {
                lVar12 = *(long *)(param_1 + 0x30);
                uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar4);
                FUN_0475f808(uVar10,param_1,*(undefined8 *)puVar3,0);
                if (lVar12 == 0) goto LAB_05273984;
                FUN_037d86bc(lVar12,uVar10,
                             *(undefined8 *)
                              System_Collections_Generic_List<ResourceHandle>___TypeInfo);
              }
              puVar4 = OVRPlugin_RaycastFilterHeader____TypeInfo;
              puVar3 = System_Collections_Generic_List<int>___TypeInfo;
              if (*(long *)(param_1 + 0x60) != 0) {
                thunk_FUN_06093474(*(long *)(param_1 + 0x60),*(undefined8 *)PTR_DAT_067ca520,0,0);
                lVar12 = *(long *)(param_1 + 0x38);
                uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                FUN_0475f628(uVar10,param_1,*(undefined8 *)puVar4,0);
                puVar4 = 
                System_ValueTuple<ServicePointScheduler_ConnectionGroup,_WebConnection,_Task>___TypeInfo
                ;
                puVar3 = PTR_DAT_067cc5f0;
                if (lVar12 != 0) {
                  FUN_0527231c(lVar12,uVar10);
                  lVar12 = *(long *)(param_1 + 0x48);
                  uVar10 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
                  FUN_04761700(uVar10,param_1,*(undefined8 *)puVar4,0);
                  if (lVar12 != 0) {
                    FUN_0529aaf8(lVar12,uVar10,0);
                    return;
                  }
                }
              }
            }
          }
LAB_05273984:
                    /* WARNING: Subroutine does not return */
          FUN_02f089c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089d0();
}


