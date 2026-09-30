/*
FUNCTION_NAME: FUN_033fb54c
ENTRY_POINT: 033fb54c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_15;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong FUN_033fb54c(ulong param_1,undefined8 param_2,long param_3,ulong param_4,int param_5,
                  undefined1 *param_6,uint *param_7)

{
  undefined *puVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  char cVar5;
  undefined2 uVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  long local_78;
  uint local_64;
  
  param_4 = param_4 & 0xffffffff;
  uVar8 = param_1;
  if ((DAT_04832647 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__);
    uVar8 = thunk_FUN_01efb3a4(
                              Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
                              );
    DAT_04832647 = 1;
  }
  puVar1 = 
  Method_Oculus_Interaction_Body_PoseDetection_OVRBodyPoseSkeletonProvider_<OVRSkeleton_IOVRSkeletonDataProvider_GetSkeletonPoseData>g__EnsureLength_8_0<OVRPlugin_Vector3f>__
  ;
  if (param_3 == 0) {
LAB_033fb6e0:
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  iVar16 = *(int *)(param_3 + 0x10);
  uVar13 = *param_7;
  if (iVar16 < 1) {
    iVar15 = 0;
  }
  else {
    iVar15 = 0;
    do {
      uVar6 = FUN_03409f80(param_3,iVar15,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c(*(long *)puVar1);
      }
      uVar8 = FUN_033f8ae0(uVar6,uVar13);
      if ((uVar8 & 1) == 0) {
        iVar16 = *(int *)(param_3 + 0x10);
        break;
      }
      iVar16 = *(int *)(param_3 + 0x10);
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar16);
  }
  if (iVar16 - iVar15 == 0) {
    uVar9 = FUN_033fbacc(uVar8,param_3,0,0,iVar15);
    if (-1 < (int)uVar9) {
      uVar8 = FUN_033fb9f4(uVar9,param_2,param_3,param_4,param_5);
      return uVar8;
    }
  }
  else {
    lVar10 = FUN_033f823c(param_1,param_3,iVar15,iVar16 - iVar15);
    puVar14 = param_6;
    if (lVar10 == 0) {
      if (param_6 != (undefined1 *)0x0) {
        FUN_03409f80(param_3,iVar15,0);
        uVar6 = FUN_03409f80(param_3,iVar15,0);
        uVar7 = FUN_033f86cc(param_1,uVar6,uVar13);
        uVar3 = FUN_033f7f6c(param_1,uVar7);
        *param_6 = uVar3;
        uVar3 = FUN_033f8000(param_1,uVar7);
        param_6[1] = uVar3;
        if ((uVar13 >> 1 & 1) == 0) {
          uVar3 = FUN_033f8094(param_1,uVar7,0);
          param_6[2] = uVar3;
        }
        if (*(int *)(*(long *)Method_UnityEngine_NoAllocHelpers_EnsureListElemCount<int>__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar3 = FUN_033f60b8(uVar7);
        param_6[3] = uVar3;
        if (0x3040 < (uVar7 & 0xffff)) {
          if ((uVar7 + 0x9a & 0xffff) < 0x38) {
            bVar2 = true;
            goto LAB_033fb96c;
          }
          uVar13 = uVar7 >> 8 & 0xff;
          if (uVar13 < 0x33) {
            if ((uVar7 & 0xffff) < 0x309d) {
              bVar2 = (uVar7 & 0xffff) < 0x3099;
            }
            else if (uVar13 < 0x31) {
              bVar2 = (uVar7 & 0xffff) != 0x30fb;
            }
            else {
              bVar2 = (uVar7 - 0x32d0 & 0xffff) < 0x2f;
            }
            goto LAB_033fb96c;
          }
        }
        bVar2 = false;
LAB_033fb96c:
        bVar12 = bVar2 ^ 1;
        local_78 = 0;
        bVar2 = true;
LAB_033fb97c:
        do {
          iVar15 = iVar15 + 1;
          if (*(int *)(param_3 + 0x10) <= iVar15) goto LAB_033fb808;
          uVar6 = FUN_03409f80(param_3,iVar15,0);
          cVar4 = FUN_033f7f6c(param_1,uVar6);
          if (cVar4 != '\x01') goto LAB_033fb808;
          cVar4 = puVar14[2];
          if (cVar4 == '\0') {
            cVar4 = '\x02';
            puVar14[2] = 2;
          }
          uVar6 = FUN_03409f80(param_3,iVar15,0);
          cVar5 = FUN_033f8094(param_1,uVar6,0);
          puVar14[2] = cVar5 + cVar4;
        } while( true );
      }
      uVar7 = 0xffffffff;
      bVar12 = 1;
      local_78 = 0;
      bVar2 = true;
    }
    else {
      local_78 = *(long *)(lVar10 + 0x20);
      bVar2 = local_78 == 0;
      if (!bVar2) {
        puVar14 = (undefined1 *)0x0;
      }
      if (puVar14 != (undefined1 *)0x0) {
        lVar11 = *(long *)(lVar10 + 0x28);
        if (lVar11 != 0) {
          uVar8 = 0;
          do {
            if ((long)(int)*(uint *)(lVar11 + 0x18) <= (long)uVar8) {
              uVar7 = 0xffffffff;
              bVar12 = 1;
              goto LAB_033fb97c;
            }
            if (*(uint *)(lVar11 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            puVar14[uVar8] = *(undefined1 *)(lVar11 + uVar8 + 0x20);
            lVar11 = *(long *)(lVar10 + 0x28);
            uVar8 = uVar8 + 1;
          } while (lVar11 != 0);
        }
        goto LAB_033fb6e0;
      }
      uVar7 = 0xffffffff;
      bVar12 = 1;
    }
LAB_033fb808:
    do {
      uVar13 = (uint)param_4;
      if (bVar2) {
        iVar16 = uVar13 + param_5;
        if (iVar16 <= (int)uVar13) break;
        local_64 = uVar13;
        uVar8 = FUN_033fbbd8(param_1,param_2,&local_64,iVar16,uVar7,puVar14,bVar12,param_7);
        while ((uVar8 & 1) == 0) {
          param_4 = (ulong)local_64;
          if (iVar16 <= (int)local_64) goto LAB_033fb920;
          uVar8 = FUN_033fbbd8(param_1,param_2,&local_64,iVar16,uVar7,puVar14,bVar12,param_7);
        }
      }
      else {
        param_4 = FUN_033fb54c(param_1,param_2,local_78,param_4,param_5,param_6,param_7);
        param_4 = param_4 & 0xffffffff;
      }
      iVar16 = (int)param_4;
      if (iVar16 < 0) break;
      param_5 = (uVar13 - iVar16) + param_5;
      uVar8 = FUN_033faf50(param_1,param_2,param_3,param_4,param_5,0,param_7);
      if ((uVar8 & 1) != 0) {
        return param_4;
      }
      lVar10 = FUN_033f823c(param_1,param_2,param_4,param_5);
      if (lVar10 == 0) {
        uVar13 = iVar16 + 1;
        iVar15 = -1;
      }
      else {
        if (*(long *)(lVar10 + 0x18) == 0) goto LAB_033fb6e0;
        iVar15 = *(int *)(*(long *)(lVar10 + 0x18) + 0x18);
        uVar13 = iVar16 + iVar15;
        iVar15 = -iVar15;
      }
      param_5 = param_5 + iVar15;
      param_4 = (ulong)uVar13;
    } while (0 < param_5);
LAB_033fb920:
    param_4 = 0xffffffff;
  }
  return param_4;
}


