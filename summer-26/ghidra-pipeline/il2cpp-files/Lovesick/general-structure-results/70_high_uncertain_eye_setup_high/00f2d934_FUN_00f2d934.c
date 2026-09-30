/*
FUNCTION_NAME: FUN_00f2d934
ENTRY_POINT: 00f2d934
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] FUN_00f2d934(long param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_037755cc & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_StringHelpers_ReadStringFromBuffer__
                      );
    thunk_FUN_00d48444(System_Xml_Schema_DateTimeFacetsChecker_TypeInfo);
    thunk_FUN_00d48444(Method_UnityEngine_Rigidbody2D_MoveRotation__);
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_get_Count__);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_4__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_Stack<InteriorNode>_Push__);
    thunk_FUN_00d48444(Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__);
    thunk_FUN_00d48444(PTR_DAT_033ebe10);
    thunk_FUN_00d48444(System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo);
    thunk_FUN_00d48444(Method_System_Collections_Concurrent_ConcurrentQueue<byte[]>__ctor__);
    thunk_FUN_00d48444(StringLiteral_232);
    DAT_037755cc = 1;
  }
  local_70 = 0;
  local_68 = 0;
  sVar8 = FUN_00f2bd34(param_1,0);
  puVar3 = Method_System_Collections_Concurrent_ConcurrentQueue<byte[]>__ctor__;
  puVar2 = System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo;
  puVar12 = (undefined8 *)
            Method_System_Collections_Generic_List<OVRAnchor_DeferredValue>_get_Count__;
  if (sVar8 == 0x7b) {
    if (*(long *)(param_1 + 0x18) != 0) {
      puVar12 = (undefined8 *)Method_System_Collections_Generic_Stack<InteriorNode>_Push__;
      if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) <= *(int *)(param_1 + 0x10)) goto LAB_00f2dadc;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      FUN_00f2bd5c(param_1);
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe0) == 0) {
        thunk_FUN_00d32864();
        lVar9 = *(long *)puVar3;
      }
      cVar1 = **(char **)(lVar9 + 0xb8);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar2);
      }
      puVar3 = Method_UnityEngine_Rigidbody2D_MoveRotation__;
      if (cVar1 == '\0') {
        if (DAT_03775606 == '\0') {
          thunk_FUN_00d48444(
                            System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo
                            );
          DAT_03775606 = '\x01';
        }
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar9 = *(long *)puVar2;
        }
        lVar11 = 0x18;
      }
      else {
        if (DAT_03775607 == '\0') {
          thunk_FUN_00d48444(
                            System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo
                            );
          DAT_03775607 = '\x01';
        }
        lVar9 = *(long *)puVar2;
        if (*(int *)(lVar9 + 0xe0) == 0) {
          thunk_FUN_00d32864();
          lVar9 = *(long *)puVar2;
        }
        lVar11 = 0x10;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + lVar11);
      lVar9 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar7 = StringLiteral_232;
      puVar6 = Method_OVRPlugin_<>c_<_cctor>b__796_4__;
      puVar5 = Method_UnityEngine_InputSystem_Utilities_StringHelpers_ReadStringFromBuffer__;
      puVar4 = Method_UnityEngine_Rendering_DebugUI_Field<Color>__ctor__;
      puVar3 = System_Collections_ListDictionaryInternal_NodeKeyValueCollection_TypeInfo;
      puVar2 = PTR_DAT_033ebe10;
      if (lVar9 != 0) {
        FUN_01298e34(lVar9,uVar13,*(undefined8 *)System_Xml_Schema_DateTimeFacetsChecker_TypeInfo);
LAB_00f2dbb0:
        do {
          iVar10 = *(int *)(param_1 + 0x10);
          do {
            if (iVar10 < 0) goto LAB_00f2dddc;
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_00f2dde8;
            if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) <= iVar10) goto LAB_00f2dd50;
            sVar8 = FUN_00f2bd34(param_1,0);
            if (sVar8 == 0x7d) {
              iVar10 = *(int *)(param_1 + 0x10);
              goto LAB_00f2dd4c;
            }
            FUN_00f2bd5c(param_1);
            auVar14 = FUN_00f2d0a0(param_1,&local_68);
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if ((auVar14._0_8_ & 0xff) == 0) {
LAB_00f2dd40:
              *param_2 = 0;
              return auVar14;
            }
            FUN_00f2bd5c(param_1);
            if (*(int *)(param_1 + 0x10) < 0) {
LAB_00f2dd20:
              *param_2 = 0;
              uVar13 = FUN_01600424(*(undefined8 *)puVar6,local_68,*(undefined8 *)puVar4,0);
              goto LAB_00f2dae4;
            }
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_00f2dde8;
            if ((*(int *)(*(long *)(param_1 + 0x18) + 0x10) <= *(int *)(param_1 + 0x10)) ||
               (sVar8 = FUN_00f2bd34(param_1,0), sVar8 != 0x3a)) goto LAB_00f2dd20;
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_00f2dde8;
            if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) <= *(int *)(param_1 + 0x10))
            goto LAB_00f2dd20;
            *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
            FUN_00f2bd5c(param_1);
            auVar14 = FUN_00f2d66c(param_1,&local_70);
            if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            if ((auVar14._0_8_ & 0xff) == 0) goto LAB_00f2dd40;
            FUN_0129a054(lVar9,local_68,local_70,*(undefined8 *)puVar5);
            FUN_00f2bd5c(param_1);
            iVar10 = *(int *)(param_1 + 0x10);
          } while (iVar10 < 0);
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_00f2dde8;
        } while ((*(int *)(*(long *)(param_1 + 0x18) + 0x10) <= iVar10) ||
                (sVar8 = FUN_00f2bd34(param_1,0), sVar8 != 0x2c));
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_00f2dde8;
        iVar10 = *(int *)(param_1 + 0x10);
        if (iVar10 < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) {
          *(int *)(param_1 + 0x10) = iVar10 + 1;
          FUN_00f2bd5c(param_1);
          goto LAB_00f2dbb0;
        }
LAB_00f2dd4c:
        if (-1 < iVar10) {
LAB_00f2dd50:
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_00f2dde8;
          if ((iVar10 < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) &&
             (sVar8 = FUN_00f2bd34(param_1,0), sVar8 == 0x7d)) {
            if (*(long *)(param_1 + 0x18) == 0) goto LAB_00f2dde8;
            if (*(int *)(param_1 + 0x10) < *(int *)(*(long *)(param_1 + 0x18) + 0x10)) {
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
              lVar11 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
              if (lVar11 != 0) {
                FUN_017b46ec(lVar11,0);
                *(long *)(lVar11 + 0x10) = lVar9;
                *param_2 = lVar11;
                lVar9 = *(long *)puVar7;
                if (*(int *)(lVar9 + 0xe0) == 0) {
                  thunk_FUN_00d32864();
                  lVar9 = *(long *)puVar7;
                }
                return *(undefined1 (*) [16])(*(long *)(lVar9 + 0xb8) + 8);
              }
              goto LAB_00f2dde8;
            }
          }
        }
LAB_00f2dddc:
        *param_2 = 0;
        uVar13 = *(undefined8 *)puVar2;
        goto LAB_00f2dae4;
      }
    }
LAB_00f2dde8:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
LAB_00f2dadc:
  *param_2 = 0;
  uVar13 = *puVar12;
LAB_00f2dae4:
  auVar14 = FUN_00f2ba44(param_1,uVar13);
  return auVar14;
}


