/*
FUNCTION_NAME: FUN_01d98850
ENTRY_POINT: 01d98850
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_01d98850(long *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  
  if ((DAT_0377f6b8 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__
                      );
    thunk_FUN_00d48444(StringLiteral_10719);
    thunk_FUN_00d48444(Method_System_Nullable<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<Type>_Add__);
    thunk_FUN_00d48444(UnityEngine_UIElements_TextureId_TypeInfo);
    thunk_FUN_00d48444(DG_Tweening_Core_DOGetter<float>_TypeInfo);
    thunk_FUN_00d48444(Method_System_Data_DataTableCollection_IndexOf__);
    thunk_FUN_00d48444(Method_System_Text_UnicodeEncoding_GetBytes__);
    DAT_0377f6b8 = 1;
  }
  puVar7 = Method_System_Data_DataTableCollection_IndexOf__;
  puVar6 = Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__;
  puVar5 = Method_System_Collections_Generic_List<Type>_Add__;
  puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<int,_List<int>>_get_Current__;
  puVar3 = DG_Tweening_Core_DOGetter<float>_TypeInfo;
  if ((param_2 != 0) && (uVar13 = *(uint *)(param_2 + 0x18), 0 < (int)uVar13)) {
    lVar17 = 0;
    plVar15 = (long *)0x0;
    lVar1 = param_2 + 0x20;
    do {
      uVar16 = (uint)lVar17;
      if (uVar13 <= uVar16) goto LAB_01d98bd4;
      plVar8 = *(long **)(lVar1 + lVar17 * 8);
      if (plVar8 == (long *)0x0) goto LAB_01d98bd0;
      uVar9 = (**(code **)(*plVar8 + 0x348))(plVar8,*(undefined8 *)(*plVar8 + 0x350));
      uVar10 = thunk_FUN_015fe514(uVar9,*(undefined8 *)puVar3,0);
      if ((uVar10 & 1) != 0) {
        if (plVar15 == (long *)0x0) {
          if (*(int *)(*(long *)Method_System_Nullable<OVRPlugin_Result>__ctor__ + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          plVar15 = (long *)FUN_01ff6bc0(param_1,0);
          if (plVar15 == (long *)0x0) goto LAB_01d98bd0;
          plVar15 = (long *)(**(code **)(*plVar15 + 0x338))
                                      (plVar15,*(undefined8 *)puVar7,
                                       *(undefined8 *)(*plVar15 + 0x340));
          if (plVar15 == (long *)0x0) goto LAB_01d98bd0;
          plVar15 = (long *)(**(code **)(*plVar15 + 600))
                                      (plVar15,param_1,*(undefined8 *)(*plVar15 + 0x260));
          if (plVar15 != (long *)0x0) {
            bVar2 = *(byte *)(*(long *)StringLiteral_10719 + 300);
            if ((*(byte *)(*plVar15 + 300) < bVar2) ||
               (*(long *)(*(long *)(*plVar15 + 200) + (ulong)bVar2 * 8 + -8) !=
                *(long *)StringLiteral_10719)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da544c(plVar15);
            }
          }
        }
        if (*(uint *)(param_2 + 0x18) <= uVar16) goto LAB_01d98bd4;
        plVar8 = *(long **)(lVar1 + lVar17 * 8);
        if (plVar8 == (long *)0x0) goto LAB_01d98bd0;
        uVar9 = (**(code **)(*plVar8 + 0x378))(plVar8,*(undefined8 *)(*plVar8 + 0x380));
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar5);
        }
        lVar11 = FUN_01f6a2b8(uVar9,0);
        if (param_1 != (long *)0x0) {
          lVar12 = *param_1;
          uVar13 = (uint)*(byte *)(lVar12 + 300);
          bVar2 = *(byte *)(*(long *)puVar4 + 300);
          if ((bVar2 <= *(byte *)(lVar12 + 300)) &&
             (*(long *)(*(long *)(lVar12 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar4)) {
            if (lVar11 == 0) goto LAB_01d98bd0;
            uVar10 = FUN_015fe8b0(lVar11,*(undefined8 *)
                                          Method_System_Text_UnicodeEncoding_GetBytes__,4,0);
            if ((uVar10 & 1) == 0) goto LAB_01d98ba4;
            lVar11 = FUN_01603ec8(lVar11,3,0);
            lVar12 = *param_1;
            uVar13 = (uint)*(byte *)(lVar12 + 300);
          }
          lVar14 = *(long *)puVar6;
          uVar10 = (ulong)*(byte *)(lVar14 + 300);
          if ((*(byte *)(lVar14 + 300) <= uVar13) &&
             (*(long *)(*(long *)(lVar12 + 200) + uVar10 * 8 + -8) == lVar14)) {
            if (lVar11 == 0) goto LAB_01d98bd0;
            uVar10 = FUN_015fe8b0(lVar11,*(undefined8 *)UnityEngine_UIElements_TextureId_TypeInfo,4,
                                  0);
            if ((uVar10 & 1) != 0) {
              lVar11 = FUN_01603ec8(lVar11,4,0);
              goto LAB_01d98b64;
            }
            lVar12 = *param_1;
            lVar14 = *(long *)puVar6;
            uVar13 = (uint)*(byte *)(lVar12 + 300);
            uVar10 = (ulong)*(byte *)(lVar14 + 300);
          }
          if (((uint)uVar10 <= uVar13) &&
             (*(long *)(*(long *)(lVar12 + 200) + uVar10 * 8 + -8) == lVar14)) {
            if (lVar11 == 0) goto LAB_01d98bd0;
            uVar10 = FUN_015fe8b0(lVar11,*(undefined8 *)
                                          Method_System_Text_UnicodeEncoding_GetBytes__,4,0);
            if ((uVar10 & 1) != 0) goto LAB_01d98ba4;
          }
        }
LAB_01d98b64:
        if (*(uint *)(param_2 + 0x18) <= uVar16) {
LAB_01d98bd4:
                    /* WARNING: Subroutine does not return */
          FUN_00da5194();
        }
        plVar8 = *(long **)(lVar1 + lVar17 * 8);
        if (plVar8 == (long *)0x0) {
LAB_01d98bd0:
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        uVar9 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
        if (plVar15 == (long *)0x0) goto LAB_01d98bd0;
        (**(code **)(*plVar15 + 0x2a8))(plVar15,lVar11,uVar9,*(undefined8 *)(*plVar15 + 0x2b0));
      }
LAB_01d98ba4:
      uVar13 = *(uint *)(param_2 + 0x18);
      lVar17 = lVar17 + 1;
    } while ((int)lVar17 < (int)uVar13);
  }
  return;
}


