/*
FUNCTION_NAME: FUN_086f9068
ENTRY_POINT: 086f9068
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_20;ray_or_cast_sink_hits_5;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_086f9068(int *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  undefined1 local_78 [4];
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_0943c77f & 1) == 0) {
    FUN_03c8f898(UnityEngine_PlayerLoop_PreUpdate_PhysicsUpdate_var);
    FUN_03c8f898(PTR_DAT_08eadbf0);
    FUN_03c8f898(UnityEngine_SendMouseEvents_HitInfo_var);
    FUN_03c8f898(System_Xml_Schema_SequenceNode_SequenceConstructPosContext_var);
    FUN_03c8f898(
                Oculus_Interaction_PoseDetection_ShapeRecognizerActiveState_FingerFeatureStateUsage_var
                );
    FUN_03c8f898(
                Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour_InstantiationSettings_var
                );
    FUN_03c8f898(PTR_DAT_08f0dd60);
    FUN_03c8f898(UnityEngine_UI_Slider_Direction_var);
    FUN_03c8f898(UnityEngine_Splines_SplineInstantiate_InstantiableItem_var);
    FUN_03c8f898(PTR_DAT_08eadc28);
    DAT_0943c77f = 1;
  }
  puVar3 = Meta_XR_MRUtilityKit_SceneDecorator_SingletonMonoBehaviour_InstantiationSettings_var;
  puVar2 = PTR_DAT_08f0dd60;
  local_70 = 0;
  local_68 = 0;
  _local_78 = 0;
  lVar7 = *(long *)(param_1 + 2);
  if (lVar7 != 0) {
    iVar6 = *(int *)(lVar7 + 0x18);
    if (iVar6 < 1) {
LAB_086f9230:
      if ((param_2 == (long *)0x0) ||
         (uVar8 = (**(code **)(*param_2 + 0x198))
                            (param_2,param_1[6] << 5,param_1[7] * *param_1,&local_70,
                             *(undefined8 *)(*param_2 + 0x1a0)), (uVar8 & 1) == 0)) {
        puVar2 = UnityEngine_PlayerLoop_PreUpdate_PhysicsUpdate_var;
        lVar7 = *(long *)UnityEngine_PlayerLoop_PreUpdate_PhysicsUpdate_var;
        if (*(int *)(lVar7 + 0xe0) == 0) {
          thunk_FUN_03cd7500();
          lVar7 = *(long *)puVar2;
        }
        puVar10 = *(undefined8 **)(lVar7 + 0xb8);
LAB_086f94cc:
        return *puVar10;
      }
      lVar7 = *(long *)(param_1 + 4);
      if (lVar7 != 0) {
        iVar6 = FUN_052cc988(lVar7,*(undefined8 *)
                                    System_Xml_Schema_SequenceNode_SequenceConstructPosContext_var);
        FUN_052cc9a4(lVar7,*param_1 + iVar6,*(undefined8 *)UnityEngine_UI_Slider_Direction_var);
        puVar2 = PTR_DAT_08eadbf0;
        lVar7 = *(long *)(param_1 + 4);
        if (lVar7 != 0) {
          lVar9 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)PTR_DAT_08eadbf0;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar4 = *(uint *)(lVar7 + 0x18);
            if (uVar4 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar4 + 1;
              *(undefined4 *)(lVar9 + (long)(int)uVar4 * 4 + 0x20) = 0xfffffffe;
            }
            else {
              FUN_052cce40(lVar7,0xfffffffe,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            if (1 < *param_1) {
              iVar6 = 1;
              do {
                lVar7 = *(long *)(param_1 + 4);
                if (lVar7 == 0) goto LAB_086f94f0;
                lVar9 = *(long *)(lVar7 + 0x10);
                lVar11 = *(long *)puVar2;
                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_086f94f0;
                uVar4 = *(uint *)(lVar7 + 0x18);
                if (uVar4 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar4 + 1;
                  *(undefined4 *)(lVar9 + (long)(int)uVar4 * 4 + 0x20) = 0xffffffff;
                }
                else {
                  FUN_052cce40(lVar7,0xffffffff,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *param_1);
            }
            lVar7 = *(long *)(param_1 + 2);
            if (DAT_0941d017 == '\0') {
              FUN_03c8f898(PTR_DAT_08e6a6b8);
              DAT_0941d017 = '\x01';
            }
            uVar8 = local_70;
            puVar2 = PTR_DAT_08e6a6b8;
            iVar6 = (int)local_70;
            iVar12 = (int)local_68;
            if (*(int *)(*(long *)PTR_DAT_08e6a6b8 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            uVar4 = FUN_07101838(uVar8 & 0xffffffff,iVar12 + iVar6,0);
            if (DAT_0941d018 == '\0') {
              FUN_03c8f898(PTR_DAT_08e6a6b8);
              DAT_0941d018 = '\x01';
            }
            iVar6 = local_70._4_4_;
            iVar12 = local_68._4_4_;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_03cd7500();
            }
            iVar6 = FUN_07101838(iVar6,iVar12 + iVar6,0);
            if (lVar7 != 0) {
              iVar12 = *param_1;
              lVar9 = *(long *)(lVar7 + 0x10);
              lVar11 = *(long *)UnityEngine_SendMouseEvents_HitInfo_var;
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar5 = *(uint *)(lVar7 + 0x18);
                uVar1 = CONCAT44(iVar12 * 0x20 + -1,uVar4 & 0xffff | iVar6 << 0x10);
                if (uVar5 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar7 + 0x18) = uVar5 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar5 * 8 + 0x20) = uVar1;
                }
                else {
                  FUN_0531dda8(lVar7,uVar1,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                _local_78 = 0x100000000000000;
                if (*(long *)(param_1 + 2) != 0) {
                  _local_78 = CONCAT44(0x1000000,*(int *)(*(long *)(param_1 + 2) + 0x18) + -1);
LAB_086f94c8:
                  puVar10 = (undefined8 *)local_78;
                  goto LAB_086f94cc;
                }
              }
            }
          }
        }
      }
    }
    else {
      sVar14 = 0;
      iVar12 = 0;
      do {
        uVar8 = FUN_0531dab8(lVar7,iVar12,*(undefined8 *)puVar3);
        if (uVar8 >> 0x20 != 0) {
          iVar15 = *param_1;
          iVar13 = iVar15 * iVar12;
          if (iVar13 < iVar13 + iVar15) {
            do {
              if (*(long *)(param_1 + 4) == 0) goto LAB_086f94f0;
              uVar4 = FUN_052ccb50(*(long *)(param_1 + 4),iVar13,*(undefined8 *)puVar2);
              if (uVar4 != 0) {
                uVar5 = FUN_086f94f4();
                if (*(long *)(param_1 + 4) == 0) goto LAB_086f94f0;
                FUN_052ccba4(*(long *)(param_1 + 4),iVar13,
                             uVar4 & (1 << (ulong)(uVar5 & 0x1f) ^ 0xffffffffU),
                             *(undefined8 *)PTR_DAT_08eadc28);
                if (*(long *)(param_1 + 2) == 0) goto LAB_086f94f0;
                FUN_0531db0c(*(long *)(param_1 + 2),iVar12,uVar8 - 0x100000000,
                             *(undefined8 *)
                              UnityEngine_Splines_SplineInstantiate_InstantiableItem_var);
                _local_78 = CONCAT17(1,(uint7)(byte)uVar5 << 0x30);
                _local_78 = CONCAT24((short)iVar13 + (short)*param_1 * sVar14,iVar12);
                goto LAB_086f94c8;
              }
              iVar15 = iVar15 + -1;
              iVar13 = iVar13 + 1;
            } while (iVar15 != 0);
          }
        }
        iVar12 = iVar12 + 1;
        if (iVar12 == iVar6) goto LAB_086f9230;
        lVar7 = *(long *)(param_1 + 2);
        sVar14 = sVar14 + -1;
      } while (lVar7 != 0);
    }
  }
LAB_086f94f0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


