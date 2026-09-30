/*
FUNCTION_NAME: FUN_03e499dc
ENTRY_POINT: 03e499dc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_16;telemetry_or_network_hits_10
*/


void FUN_03e499dc(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  
  if ((DAT_0483a8cc & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_04579dc0);
                    /* try { // try from 03e49a34 to 03f49c43 has its CatchHandler @ 03e49a34
                       catch() { ... } // from try @ 03e49a34 with catch @ 03e49a34
                       catch() { ... } // from try @ 03e49cd8 with catch @ 03e49a34
                       catch() { ... } // from try @ 03e4a188 with catch @ 03e49a34
                       catch() { ... } // from try @ 03e4a26c with catch @ 03e49a34
                       catch() { ... } // from try @ 03e4a284 with catch @ 03e49a34
                       catch() { ... } // from try @ 03e4a358 with catch @ 03e49a34
                       catch() { ... } // from try @ 03e4a3a8 with catch @ 03e49a34
                       catch() { ... } // from try @ 03e4a438 with catch @ 03e49a34 */
    thunk_FUN_01efb3a4(PTR_DAT_0457a080);
    thunk_FUN_01efb3a4(PTR_DAT_04579df0);
    DAT_0483a8cc = 1;
  }
  if (param_1[0x6d] == 0) {
LAB_03e49d6c:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar2 = *(uint *)(param_1[0x6d] + 0x34);
  plVar1 = param_1 + 0x25;
  if (param_1[0x25] == 0) {
    lVar12 = FUN_01f08890(*(undefined8 *)
                           Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                          ,uVar2);
    *plVar1 = lVar12;
    thunk_FUN_01f51358(plVar1,lVar12);
  }
  else if (uVar2 != *(uint *)(param_1[0x25] + 0x18)) {
    if (*(int *)(*(long *)PTR_DAT_04579df0 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_0241fb14(plVar1,uVar2,0,*(undefined8 *)PTR_DAT_0457a080);
  }
  puVar4 = PTR_DAT_04579dc0;
  puVar3 = Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__;
  if (0 < (int)uVar2) {
    if (param_2 == 0) goto LAB_03e49d6c;
    uVar10 = 0;
    do {
      if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_03e49d70;
      lVar14 = (long)(int)uVar10;
      plVar15 = (long *)(param_2 + lVar14 * 8 + 0x20);
      lVar12 = *plVar15;
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
      }
      if (lVar12 == 0) goto LAB_03e49d6c;
      lVar12 = FUN_0404e240(lVar12,**(undefined4 **)(*(long *)puVar4 + 0xb8),0);
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar3);
      }
      uVar7 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                        (lVar12,0,0);
      if (uVar10 == 0) {
        if ((uVar7 & 1) == 0) {
          if (lVar12 == 0) goto LAB_03e49d6c;
                    /* try { // try from 03e49c74 to 03f49c7b has its CatchHandler @ 03e4a320 */
          iVar5 = FUN_04076320(lVar12,0);
                    /* try { // try from 03e49c80 to 03f49c8b has its CatchHandler @ 03e4a31c */
          lVar12 = param_1[0x22];
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c(*(long *)puVar4);
          }
                    /* try { // try from 03e49ca8 to 03f49cab has its CatchHandler @ 03e4a2a4 */
                    /* try { // try from 03e49cac to 03f49cbb has its CatchHandler @ 03e4a308 */
          if ((lVar12 == 0) ||
             (lVar12 = FUN_0404e240(lVar12,**(undefined4 **)(*(long *)puVar4 + 0xb8),0), lVar12 == 0
             )) goto LAB_03e49d6c;
          iVar6 = FUN_04076320(lVar12,0);
          if (iVar5 == iVar6) {
                    /* try { // try from 03e49cd0 to 03f49cd7 has its CatchHandler @ 03e4a2a8 */
            if (*(int *)(param_2 + 0x18) == 0) goto LAB_03e49d70;
            plVar11 = (long *)*plVar1;
                    /* try { // try from 03e49cd8 to 03f49e83 has its CatchHandler @ 03e49a34 */
            if (plVar11 == (long *)0x0) goto LAB_03e49d6c;
            lVar12 = *plVar15;
            if ((lVar12 != 0) &&
               (lVar14 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)(*plVar11 + 0x40)), lVar14 == 0))
            {
LAB_03e49d74:
              uVar9 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
              FUN_01f08910(uVar9,0);
            }
            if ((int)plVar11[3] == 0) goto LAB_03e49d70;
            plVar11[4] = lVar12;
            thunk_FUN_01f51358(plVar11 + 4,lVar12);
            param_1[0x22] = lVar12;
            thunk_FUN_01f51358(param_1 + 0x22,lVar12);
            uVar16 = (**(code **)(*param_1 + 0x7b8))
                               (param_1,param_1[0x22],*(undefined8 *)(*param_1 + 0x7c0));
            *(undefined4 *)(param_1 + 0xc3) = uVar16;
          }
        }
      }
      else if ((uVar7 & 1) == 0) {
        if (lVar12 == 0) goto LAB_03e49d6c;
        iVar5 = FUN_04076320(lVar12,0);
        lVar12 = param_1[0xe1];
        if (lVar12 == 0) goto LAB_03e49d6c;
        if (*(uint *)(lVar12 + 0x18) <= uVar10) {
LAB_03e49d70:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        lVar12 = *(long *)(lVar12 + lVar14 * 8 + 0x20);
        if (lVar12 == 0) goto LAB_03e49d6c;
        lVar12 = *(long *)(lVar12 + 0x38);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if ((lVar12 == 0) ||
           (lVar12 = FUN_0404e240(lVar12,**(undefined4 **)(*(long *)puVar4 + 0xb8),0), lVar12 == 0))
        goto LAB_03e49d6c;
        iVar6 = FUN_04076320(lVar12,0);
        if (iVar5 == iVar6) {
          lVar12 = param_1[0xe1];
          if (lVar12 == 0) goto LAB_03e49d6c;
          if (*(uint *)(lVar12 + 0x18) <= uVar10) goto LAB_03e49d70;
          lVar12 = *(long *)(lVar12 + lVar14 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_03e49d6c;
          if (*(char *)(lVar12 + 0x50) != '\0') {
            if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_03e49d70;
            plVar11 = (long *)*plVar1;
            if (plVar11 == (long *)0x0) goto LAB_03e49d6c;
            lVar13 = *plVar15;
            if ((lVar13 != 0) &&
               (lVar8 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar11 + 0x40)), lVar8 == 0))
            goto LAB_03e49d74;
                    /* try { // try from 03e49c44 to 03f49c4b has its CatchHandler @ 03e4a32c */
            if (*(uint *)(plVar11 + 3) <= uVar10) goto LAB_03e49d70;
            plVar11[lVar14 + 4] = lVar13;
            thunk_FUN_01f51358(plVar11 + lVar14 + 4,lVar13);
            thunk_FUN_03e96508(lVar12,lVar13,0);
                    /* try { // try from 03e49c68 to 03f49c6b has its CatchHandler @ 03e4a2fc */
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar2 != uVar10);
  }
  return;
}


