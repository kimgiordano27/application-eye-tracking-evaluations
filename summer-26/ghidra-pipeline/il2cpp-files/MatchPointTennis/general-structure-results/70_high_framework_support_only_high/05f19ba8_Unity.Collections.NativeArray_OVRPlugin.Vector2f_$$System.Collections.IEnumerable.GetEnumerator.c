/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 05f19ba8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,uint param_2,int param_3,int param_4,long param_5,long param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  if (param_1 == 0) {
LAB_05f19e5c:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
  uVar7 = *(uint *)(param_1 + 0x18);
  iVar4 = param_4 + -1;
  uVar5 = iVar4 + param_2;
  if (uVar5 < uVar7) {
    lVar8 = (long)(int)uVar5;
    lVar1 = param_1 + lVar8 * 0x40;
    uVar12 = *(undefined8 *)(lVar1 + 0x48);
    uVar9 = *(undefined8 *)(lVar1 + 0x40);
    uVar18 = *(undefined8 *)(lVar1 + 0x58);
    uVar15 = *(undefined8 *)(lVar1 + 0x50);
    uVar24 = *(undefined8 *)(lVar1 + 0x28);
    uVar21 = *(undefined8 *)(lVar1 + 0x20);
    uVar30 = *(undefined8 *)(lVar1 + 0x38);
    uVar27 = *(undefined8 *)(lVar1 + 0x30);
    iVar3 = param_3;
    if (param_3 < 0) {
      iVar3 = param_3 + 1;
    }
    if ((int)param_2 <= iVar3 >> 1) {
      do {
        uVar7 = param_2 * 2;
        if ((int)uVar7 < param_3) {
          uVar5 = uVar7 + param_4;
          if (*(uint *)(param_1 + 0x18) <= uVar5 - 1) goto LAB_05f19e58;
          lVar1 = param_1 + (long)(int)(uVar5 - 1) * 0x40;
          uVar13 = *(undefined8 *)(lVar1 + 0x48);
          uVar10 = *(undefined8 *)(lVar1 + 0x40);
          uVar19 = *(undefined8 *)(lVar1 + 0x58);
          uVar16 = *(undefined8 *)(lVar1 + 0x50);
          uVar25 = *(undefined8 *)(lVar1 + 0x28);
          uVar22 = *(undefined8 *)(lVar1 + 0x20);
          uVar31 = *(undefined8 *)(lVar1 + 0x38);
          uVar28 = *(undefined8 *)(lVar1 + 0x30);
          if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_05f19e58;
          lVar1 = param_1 + (long)(int)uVar5 * 0x40;
          uVar20 = *(undefined8 *)(lVar1 + 0x48);
          uVar17 = *(undefined8 *)(lVar1 + 0x40);
          uVar14 = *(undefined8 *)(lVar1 + 0x58);
          uVar11 = *(undefined8 *)(lVar1 + 0x50);
          uVar32 = *(undefined8 *)(lVar1 + 0x28);
          uVar29 = *(undefined8 *)(lVar1 + 0x20);
          uVar26 = *(undefined8 *)(lVar1 + 0x38);
          uVar23 = *(undefined8 *)(lVar1 + 0x30);
          if (param_5 == 0) goto LAB_05f19e5c;
          if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
            FUN_04481fb8();
          }
          uStack_80 = uVar29;
          uStack_78 = uVar32;
          uStack_70 = uVar23;
          uStack_68 = uVar26;
          uStack_60 = uVar17;
          uStack_58 = uVar20;
          uStack_50 = uVar11;
          uStack_48 = uVar14;
          uStack_40 = uVar22;
          uStack_38 = uVar25;
          uStack_30 = uVar28;
          uStack_28 = uVar31;
          uStack_20 = uVar10;
          uStack_18 = uVar13;
          uStack_10 = uVar16;
          uStack_8 = uVar19;
          uVar5 = (**(code **)(param_5 + 0x18))
                            (*(undefined8 *)(param_5 + 0x40),&uStack_40,&uStack_80,
                             *(undefined8 *)(param_5 + 0x28));
          uVar7 = uVar7 | uVar5 >> 0x1f;
        }
        uVar5 = iVar4 + uVar7;
        if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_05f19e58;
        lVar8 = (long)(int)uVar5;
        lVar1 = param_1 + lVar8 * 0x40;
        uVar19 = *(undefined8 *)(lVar1 + 0x48);
        uVar16 = *(undefined8 *)(lVar1 + 0x40);
        uVar13 = *(undefined8 *)(lVar1 + 0x58);
        uVar10 = *(undefined8 *)(lVar1 + 0x50);
        uVar31 = *(undefined8 *)(lVar1 + 0x28);
        uVar28 = *(undefined8 *)(lVar1 + 0x20);
        uVar25 = *(undefined8 *)(lVar1 + 0x38);
        uVar22 = *(undefined8 *)(lVar1 + 0x30);
        if (param_5 == 0) goto LAB_05f19e5c;
        if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        uStack_80 = uVar28;
        uStack_78 = uVar31;
        uStack_70 = uVar22;
        uStack_68 = uVar25;
        uStack_60 = uVar16;
        uStack_58 = uVar19;
        uStack_50 = uVar10;
        uStack_48 = uVar13;
        uStack_40 = uVar21;
        uStack_38 = uVar24;
        uStack_30 = uVar27;
        uStack_28 = uVar30;
        uStack_20 = uVar9;
        uStack_18 = uVar12;
        uStack_10 = uVar15;
        uStack_8 = uVar18;
        iVar6 = (**(code **)(param_5 + 0x18))
                          (*(undefined8 *)(param_5 + 0x40),&uStack_40,&uStack_80,
                           *(undefined8 *)(param_5 + 0x28));
        if (-1 < iVar6) {
          uVar5 = iVar4 + param_2;
          lVar8 = (long)(int)uVar5;
          break;
        }
        if (*(uint *)(param_1 + 0x18) <= uVar5) goto LAB_05f19e58;
        uVar10 = *(undefined8 *)(lVar1 + 0x40);
        uVar16 = *(undefined8 *)(lVar1 + 0x58);
        uVar13 = *(undefined8 *)(lVar1 + 0x50);
        uVar22 = *(undefined8 *)(lVar1 + 0x28);
        uVar19 = *(undefined8 *)(lVar1 + 0x20);
        uVar28 = *(undefined8 *)(lVar1 + 0x38);
        uVar25 = *(undefined8 *)(lVar1 + 0x30);
        if (*(uint *)(param_1 + 0x18) <= iVar4 + param_2) goto LAB_05f19e58;
        lVar2 = param_1 + (long)(int)(iVar4 + param_2) * 0x40;
        *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(lVar1 + 0x48);
        *(undefined8 *)(lVar2 + 0x40) = uVar10;
        *(undefined8 *)(lVar2 + 0x58) = uVar16;
        *(undefined8 *)(lVar2 + 0x50) = uVar13;
        *(undefined8 *)(lVar2 + 0x28) = uVar22;
        *(undefined8 *)(lVar2 + 0x20) = uVar19;
        *(undefined8 *)(lVar2 + 0x38) = uVar28;
        *(undefined8 *)(lVar2 + 0x30) = uVar25;
        thunk_FUN_044bb4b4(lVar2 + 0x20,0);
        param_2 = uVar7;
      } while ((int)uVar7 <= iVar3 >> 1);
      uVar7 = *(uint *)(param_1 + 0x18);
    }
    if (uVar5 < uVar7) {
      param_1 = param_1 + lVar8 * 0x40;
      *(undefined8 *)(param_1 + 0x48) = uVar12;
      *(undefined8 *)(param_1 + 0x40) = uVar9;
      *(undefined8 *)(param_1 + 0x58) = uVar18;
      *(undefined8 *)(param_1 + 0x50) = uVar15;
      *(undefined8 *)(param_1 + 0x28) = uVar24;
      *(undefined8 *)(param_1 + 0x20) = uVar21;
      *(undefined8 *)(param_1 + 0x38) = uVar30;
      *(undefined8 *)(param_1 + 0x30) = uVar27;
      thunk_FUN_044bb4b4(param_1 + 0x20,0);
      return;
    }
  }
LAB_05f19e58:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


