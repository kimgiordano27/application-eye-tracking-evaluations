/*
FUNCTION_NAME: UnityEngine.UIElements.UITKTextHandle$$Update
ENTRY_POINT: 03e63068
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4 UnityEngine_UIElements_UITKTextHandle__Update(long param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 *in_stack_00000060;
  long in_stack_00000068;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x508));
  FUN_01d7d918(PTR_DAT_04252510);
  FUN_01d7d918(PTR_DAT_04252518);
  FUN_01d7d918(PTR_DAT_04252520);
  FUN_01d7d918(PTR_DAT_04252528);
  FUN_01d7d918(PTR_DAT_04252458);
  FUN_01d7d918(
              Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
              );
  FUN_01d7d918(StringLiteral_2636);
  FUN_01d7d918(
              Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
              );
  FUN_01d7d918(PTR_DAT_04252470);
  FUN_01d7d918(PTR_DAT_042522e8);
  *(undefined1 *)(unaff_x20 + 0x16b) = 1;
  in_stack_00000060 = &stack0x00000068;
  iVar1 = *(int *)(unaff_x19 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
    goto LAB_03e633fc;
  }
  if (iVar1 == 1) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xfffffffd;
    goto LAB_03e6340c;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
    if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x20);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x18) != 0)) {
      uVar5 = thunk_FUN_01de27b8(*(undefined8 *)PTR_DAT_04252520);
      System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
                (uVar5,*(undefined8 *)PTR_DAT_04252518);
      *(undefined8 *)(in_stack_00000068 + 0x30) = uVar5;
      thunk_FUN_01e10808((undefined8 *)(in_stack_00000068 + 0x30),uVar5);
      if (*(long *)(in_stack_00000068 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar8 = *(long *)(*(long *)(in_stack_00000068 + 0x28) + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_0236b90c(&stack0x00000008,lVar8,*(undefined8 *)PTR_DAT_04252528);
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      *(undefined8 *)(in_stack_00000068 + 0x58) = in_stack_00000028;
      *(undefined8 *)(in_stack_00000068 + 0x50) = in_stack_00000020;
      *(undefined8 *)(in_stack_00000068 + 0x48) = in_stack_00000018;
      *(undefined8 *)(in_stack_00000068 + 0x40) = in_stack_00000010;
      *(undefined8 *)(in_stack_00000068 + 0x38) = in_stack_00000008;
      thunk_FUN_01e10808(in_stack_00000068 + 0x38,0);
      *(undefined4 *)(in_stack_00000068 + 0x10) = 0xfffffffd;
      while (uVar7 = FUN_02c7e5c8(in_stack_00000068 + 0x38,*(undefined8 *)PTR_DAT_042524f8),
            (uVar7 & 1) != 0) {
        *(undefined8 *)(in_stack_00000068 + 0x68) = *(undefined8 *)(in_stack_00000068 + 0x50);
        *(undefined8 *)(in_stack_00000068 + 0x60) = *(undefined8 *)(in_stack_00000068 + 0x48);
        *(undefined8 *)(in_stack_00000068 + 0x70) = *(undefined8 *)(in_stack_00000068 + 0x58);
        thunk_FUN_01e10808(in_stack_00000068 + 0x60,0);
        puVar3 = 
        Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
        ;
        uVar5 = *(undefined8 *)(in_stack_00000068 + 0x70);
        if (*(int *)(*(long *)
                      Field_<PrivateImplementationDetails>_F7D381AF73D85950E0B064CF1AA8F14938A1F38084B46CE36AAEFE81BEF739F3
                    + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar7 = FUN_03d749a8(uVar5,0,0);
        puVar4 = PTR_DAT_04252510;
        if ((uVar7 & 1) != 0) {
          if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          uVar7 = FUN_02f17234(*(long *)(in_stack_00000068 + 0x30),
                               *(undefined8 *)(in_stack_00000068 + 0x70),
                               *(undefined8 *)PTR_DAT_04252510);
          if ((uVar7 & 1) == 0) {
            if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            FUN_02f17d24(*(long *)(in_stack_00000068 + 0x30),
                         *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)PTR_DAT_04252508);
            *(undefined8 *)(in_stack_00000068 + 0x18) = *(undefined8 *)(in_stack_00000068 + 0x70);
            thunk_FUN_01e10808();
            *(undefined4 *)(in_stack_00000068 + 0x10) = 1;
            return 1;
          }
        }
        uVar7 = FUN_0326a75c(*(undefined8 *)(in_stack_00000068 + 0x68),0);
        if ((uVar7 & 1) == 0) {
          uVar5 = *(undefined8 *)(in_stack_00000068 + 0x68);
          uVar10 = *(undefined8 *)PTR_DAT_04252470;
          if (*(int *)(*(long *)
                        Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                      + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar10 = FUN_033a87c8(uVar10,0);
          if (*(int *)(*(long *)PTR_DAT_04236170 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar11 = FUN_03daa080(0);
          if (*(int *)(*(long *)StringLiteral_2636 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          plVar6 = (long *)FUN_03f1284c(uVar11,uVar5,uVar10,0);
          if (plVar6 == (long *)0x0) {
            plVar6 = (long *)0x0;
            *(undefined8 *)(in_stack_00000068 + 0x78) = 0;
          }
          else {
            lVar8 = *(long *)PTR_DAT_042522e8;
            bVar2 = *(byte *)(lVar8 + 0x130);
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar9 = (long *)0x0;
            }
            else {
              plVar9 = plVar6;
              if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
                plVar9 = (long *)0x0;
              }
            }
            *(long **)(in_stack_00000068 + 0x78) = plVar9;
            if (*(byte *)(*plVar6 + 0x130) < bVar2) {
              plVar6 = (long *)0x0;
            }
            else if (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar2 * 8 + -8) != lVar8) {
              plVar6 = (long *)0x0;
            }
          }
          thunk_FUN_01e10808(in_stack_00000068 + 0x78,plVar6);
          uVar5 = *(undefined8 *)(in_stack_00000068 + 0x78);
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01dc4f30();
          }
          uVar7 = FUN_03d749a8(uVar5,0,0);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01d7db70();
            }
            uVar7 = FUN_02f17234(*(long *)(in_stack_00000068 + 0x30),
                                 *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)puVar4);
            if ((uVar7 & 1) == 0) {
              if (*(long *)(in_stack_00000068 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              FUN_02f17d24(*(long *)(in_stack_00000068 + 0x30),
                           *(undefined8 *)(in_stack_00000068 + 0x70),*(undefined8 *)PTR_DAT_04252508
                          );
              *(undefined8 *)(in_stack_00000068 + 0x18) = *(undefined8 *)(in_stack_00000068 + 0x78);
              thunk_FUN_01e10808();
              *(undefined4 *)(in_stack_00000068 + 0x10) = 2;
              return 1;
            }
          }
LAB_03e633fc:
          *(undefined8 *)(in_stack_00000068 + 0x78) = 0;
          thunk_FUN_01e10808((undefined8 *)(in_stack_00000068 + 0x78),0);
        }
LAB_03e6340c:
        *(undefined8 *)(in_stack_00000068 + 0x60) = 0;
        *(undefined8 *)(in_stack_00000068 + 0x68) = 0;
        *(undefined8 *)(in_stack_00000068 + 0x70) = 0;
      }
      FUN_03e635c4();
      *(undefined8 *)(in_stack_00000068 + 0x58) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x50) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x48) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x40) = 0;
      *(undefined8 *)(in_stack_00000068 + 0x38) = 0;
    }
  }
  return 0;
}


