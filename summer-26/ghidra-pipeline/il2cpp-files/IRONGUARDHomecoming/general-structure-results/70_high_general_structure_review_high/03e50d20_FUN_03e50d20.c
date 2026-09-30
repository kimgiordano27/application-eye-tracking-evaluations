/*
FUNCTION_NAME: FUN_03e50d20
ENTRY_POINT: 03e50d20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_17;telemetry_or_network_hits_10
*/


void FUN_03e50d20(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined4 uVar16;
  
  if ((DAT_0483a903 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                      );
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(PTR_DAT_04579dc0);
    thunk_FUN_01efb3a4(PTR_DAT_0457a080);
    thunk_FUN_01efb3a4(PTR_DAT_04579df0);
    DAT_0483a903 = 1;
  }
  if (param_1[0x6d] != 0) {
    uVar2 = *(uint *)(param_1[0x6d] + 0x34);
    plVar1 = param_1 + 0x25;
    if (param_1[0x25] == 0) {
      lVar11 = FUN_01f08890(*(undefined8 *)
                             Method_Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_get_IsActive__
                            ,uVar2);
      *plVar1 = lVar11;
      thunk_FUN_01f51358(plVar1,lVar11);
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
      if (param_2 == 0) goto LAB_03e510e4;
      uVar10 = 0;
      do {
        if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_03e510e8;
        lVar14 = (long)(int)uVar10;
        plVar12 = (long *)(param_2 + lVar14 * 8 + 0x20);
        lVar11 = *plVar12;
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar11 == 0) goto LAB_03e510e4;
        uVar7 = FUN_0404e240(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0);
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c(*(long *)puVar3);
        }
        uVar8 = UnityEngine_UIElements_UIR_Implementation_UIRStylePainter__BuildEntryFromNativeMesh
                          (uVar7,0,0);
        if (uVar10 == 0) {
          if ((uVar8 & 1) == 0) {
            if (*(int *)(param_2 + 0x18) == 0) goto LAB_03e510e8;
            lVar11 = *plVar12;
            if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
            }
            if ((lVar11 == 0) ||
               (lVar11 = FUN_0404e240(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0),
               lVar11 == 0)) goto LAB_03e510e4;
            iVar5 = FUN_04076320(lVar11,0);
            lVar11 = param_1[0x22];
            if (lVar11 == 0) goto LAB_03e510e4;
            lVar11 = FUN_0404e240(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0);
            if (lVar11 == 0) goto LAB_03e510e4;
            iVar6 = FUN_04076320(lVar11,0);
            if (iVar5 == iVar6) {
              if (*(int *)(param_2 + 0x18) == 0) goto LAB_03e510e8;
              plVar15 = (long *)*plVar1;
              if (plVar15 == (long *)0x0) goto LAB_03e510e4;
              lVar11 = *plVar12;
              if ((lVar11 != 0) &&
                 (lVar14 = thunk_FUN_01f116d0(lVar11,*(undefined8 *)(*plVar15 + 0x40)), lVar14 == 0)
                 ) {
LAB_03e510ec:
                uVar7 = PrefabSceneManager__LoadSceneAsync();
                    /* WARNING: Subroutine does not return */
                FUN_01f08910(uVar7,0);
              }
              if ((int)plVar15[3] == 0) goto LAB_03e510e8;
              plVar15[4] = lVar11;
              thunk_FUN_01f51358(plVar15 + 4,lVar11);
              param_1[0x22] = lVar11;
              thunk_FUN_01f51358(param_1 + 0x22,lVar11);
              uVar16 = (**(code **)(*param_1 + 0x7b8))
                                 (param_1,param_1[0x22],*(undefined8 *)(*param_1 + 0x7c0));
              *(undefined4 *)(param_1 + 0xc3) = uVar16;
            }
          }
        }
        else if ((uVar8 & 1) == 0) {
          if (*(uint *)(param_2 + 0x18) <= uVar10) {
LAB_03e510e8:
                    /* WARNING: Subroutine does not return */
            FUN_01f08a44();
          }
          lVar11 = *plVar12;
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          if ((lVar11 == 0) ||
             (lVar11 = FUN_0404e240(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0), lVar11 == 0
             )) goto LAB_03e510e4;
          iVar5 = FUN_04076320(lVar11,0);
          lVar11 = param_1[0xe1];
          if (lVar11 == 0) goto LAB_03e510e4;
          if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_03e510e8;
          lVar11 = *(long *)(lVar11 + lVar14 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_03e510e4;
          lVar11 = *(long *)(lVar11 + 0xf0);
          if ((lVar11 == 0) ||
             (lVar11 = FUN_0404e240(lVar11,**(undefined4 **)(*(long *)puVar4 + 0xb8),0), lVar11 == 0
             )) goto LAB_03e510e4;
          iVar6 = FUN_04076320(lVar11,0);
          if (iVar5 == iVar6) {
            lVar11 = param_1[0xe1];
            if (lVar11 == 0) goto LAB_03e510e4;
            if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_03e510e8;
            lVar11 = *(long *)(lVar11 + lVar14 * 8 + 0x20);
            if (lVar11 == 0) goto LAB_03e510e4;
            if (*(char *)(lVar11 + 0x108) != '\0') {
              if (*(uint *)(param_2 + 0x18) <= uVar10) goto LAB_03e510e8;
              plVar15 = (long *)*plVar1;
              if (plVar15 == (long *)0x0) goto LAB_03e510e4;
              lVar13 = *plVar12;
              if ((lVar13 != 0) &&
                 (lVar9 = thunk_FUN_01f116d0(lVar13,*(undefined8 *)(*plVar15 + 0x40)), lVar9 == 0))
              goto LAB_03e510ec;
              if (*(uint *)(plVar15 + 3) <= uVar10) goto LAB_03e510e8;
              plVar15[lVar14 + 4] = lVar13;
              thunk_FUN_01f51358(plVar15 + lVar14 + 4,lVar13);
              thunk_FUN_03e97868(lVar11,lVar13,0);
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    return;
  }
LAB_03e510e4:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


