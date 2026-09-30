/*
FUNCTION_NAME: FUN_073015cc
ENTRY_POINT: 073015cc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0730186c) */

void FUN_073015cc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar5 = UnityEngine_Rendering_CommandBufferHelpers_TypeInfo;
  puVar4 = UnityEngine_Rendering_CommandBuffer_TypeInfo;
  puVar3 = UnityEngine_UIElements_Columns_TypeInfo;
  puVar2 = UnityEngine_UIElements_Internal_ColumnResizer_TypeInfo;
  puVar1 = PTR_DAT_07d960e0;
  if ((DAT_08268cef & 1) == 0) {
    FUN_0373b518(UnityEngine_UIElements_Internal_ColumnResizer_TypeInfo);
    FUN_0373b518(PTR_DAT_07d896f8);
    FUN_0373b518(PTR_DAT_07d99048);
    FUN_0373b518(PTR_DAT_07d89700);
    FUN_0373b518(UnityEngine_Rendering_CommandBuffer_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_CommandBufferHelpers_TypeInfo);
    FUN_0373b518(UnityEngine_Rendering_CommandBufferPool_TypeInfo);
    FUN_0373b518(PTR_DAT_07d99050);
    FUN_0373b518(UnityEngine_UIElements_Columns_TypeInfo);
    FUN_0373b518(PTR_DAT_07d960e0);
    DAT_08268cef = 1;
  }
  uVar6 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
  FUN_044a4918(uVar6,param_1,*(undefined8 *)puVar4,0);
  uVar6 = FUN_0426e774(param_1,*(undefined8 *)puVar1,uVar6,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  thunk_FUN_037aeb94();
  Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Copy(param_1,*(undefined8 *)puVar5);
  puVar1 = PTR_DAT_07d896f8;
  if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  plVar7 = (long *)FUN_051395a8(*(long *)(param_1 + 0x98),*(undefined8 *)PTR_DAT_07d99050);
  puVar3 = PTR_DAT_07d99048;
  puVar2 = PTR_DAT_07d89700;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  do {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_07301768;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar2,0);
LAB_07301768:
    uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar10 & 1) == 0) break;
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_073017c4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar3,0);
LAB_073017c4:
    uVar6 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    thunk_FUN_07331220(param_1,uVar6,*(undefined8 *)(param_1 + 0xa0),0);
  } while( true );
  if (plVar7 != (long *)0x0) {
    lVar9 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0730183c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_0377596c(plVar7,*(long *)puVar1,0);
LAB_0730183c:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return;
}


