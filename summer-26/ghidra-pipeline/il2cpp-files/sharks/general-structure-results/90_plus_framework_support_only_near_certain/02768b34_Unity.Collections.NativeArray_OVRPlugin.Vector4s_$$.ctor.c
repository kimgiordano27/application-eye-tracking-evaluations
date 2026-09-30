/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4s>$$.ctor
ENTRY_POINT: 02768b34
PROGRAM: sharks-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_10;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_5
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4s>___ctor
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_1 == 0) {
Unity_Collections_NativeArray<OVRPlugin_Vector4s>__set_Item:
                    /* WARNING: Subroutine does not return */
    FUN_017fc5a8();
  }
  uVar12 = *(uint *)(param_1 + 0x18);
  iVar8 = param_4 + -1;
  uVar9 = iVar8 + param_2;
  if (uVar9 < uVar12) {
    lVar13 = (long)(int)uVar9;
    lVar1 = param_1 + lVar13 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x20);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    iVar3 = param_3;
    if (param_3 < 0) {
      iVar3 = param_3 + 1;
    }
    if ((int)param_2 <= iVar3 >> 1) {
      do {
        uVar12 = param_2 * 2;
        if ((int)uVar12 < param_3) {
          uVar9 = uVar12 + param_4;
          if ((*(uint *)(param_1 + 0x18) <= uVar9 - 1) || (*(uint *)(param_1 + 0x18) <= uVar9))
          goto LAB_02768d10;
          if (param_5 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__set_Item;
          lVar1 = param_1 + (long)(int)(uVar9 - 1) * 0x10;
          lVar13 = param_1 + (long)(int)uVar9 * 0x10;
          uVar14 = *(undefined8 *)(lVar1 + 0x20);
          uVar6 = *(undefined8 *)(lVar1 + 0x28);
          uVar15 = *(undefined8 *)(lVar13 + 0x20);
          uVar7 = *(undefined8 *)(lVar13 + 0x28);
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_0185daa4();
          }
          uVar9 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),uVar14,uVar6,uVar15,uVar7,
                             *(undefined8 *)(param_5 + 0x28));
          uVar12 = uVar12 | uVar9 >> 0x1f;
        }
        uVar9 = iVar8 + uVar12;
        if (*(uint *)(param_1 + 0x18) <= uVar9) goto LAB_02768d10;
        lVar13 = (long)(int)uVar9;
        lVar1 = param_1 + lVar13 * 0x10;
        uVar14 = *(undefined8 *)(lVar1 + 0x20);
        if (param_5 == 0) goto Unity_Collections_NativeArray<OVRPlugin_Vector4s>__set_Item;
        uVar15 = *(undefined8 *)(lVar1 + 0x28);
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_0185daa4();
        }
        iVar10 = (**(code **)(param_5 + 0x18))
                           (*(undefined8 *)(param_5 + 0x40),uVar4,uVar5,uVar14,uVar15,
                            *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar10) {
          uVar9 = iVar8 + param_2;
          lVar13 = (long)(int)uVar9;
          break;
        }
        if ((*(uint *)(param_1 + 0x18) <= uVar9) || (*(uint *)(param_1 + 0x18) <= iVar8 + param_2))
        goto LAB_02768d10;
        uVar14 = *(undefined8 *)(lVar1 + 0x20);
        lVar2 = param_1 + (long)(int)(iVar8 + param_2) * 0x10;
        puVar11 = (undefined8 *)(lVar2 + 0x20);
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
        *puVar11 = uVar14;
        thunk_FUN_0188fd20(puVar11,0);
        param_2 = uVar12;
      } while ((int)uVar12 <= iVar3 >> 1);
      uVar12 = *(uint *)(param_1 + 0x18);
    }
    if (uVar9 < uVar12) {
      param_1 = param_1 + lVar13 * 0x10;
      puVar11 = (undefined8 *)(param_1 + 0x20);
      *puVar11 = uVar4;
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      thunk_FUN_0188fd20(puVar11,0);
      return;
    }
  }
LAB_02768d10:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


