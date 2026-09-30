/*
FUNCTION_NAME: UnityEngine.Rendering.CommandBuffer$$ConfigureFoveatedRendering
ENTRY_POINT: 065e4d44
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_foveated_rendering_support_or_attempt_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_foveated_rendering_support_or_attempt
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: validity_gate;foveation_rendering;keyword_support;attempted_use;dynamic_foveation_possible
EVIDENCE: validity_or_gating_hits_15;strong_foveation_hits_2;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


/* WARNING: Removing unreachable block (ram,0x065e5228) */

void UnityEngine_Rendering_CommandBuffer__ConfigureFoveatedRendering(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x19;
  int iVar15;
  long unaff_x20;
  long lVar16;
  long *unaff_x23;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  long in_stack_00000110;
  int iStack0000000000000118;
  int iStack0000000000000120;
  undefined4 uStack0000000000000124;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  
  FUN_02f07e70(UnityEngine_GUIStyle_TypeInfo);
  FUN_02f07e70(UnityEngine_GUIStyleState_TypeInfo);
  FUN_02f07e70(UnityEngine_GUITargetAttribute_TypeInfo);
  FUN_02f07e70(UnityEngine_GUIUtility_TypeInfo);
  FUN_02f07e70(UnityEngine_GUIWordWrapSizer_TypeInfo);
  FUN_02f07e70(System_Runtime_Serialization_GYearDataContract_TypeInfo);
  FUN_02f07e70(PTR_DAT_06d01e20);
  FUN_02f07e70(System_Runtime_Serialization_GYearMonthDataContract_TypeInfo);
  FUN_02f07e70(System_IO_Compression_GZipStream_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xccd) = 1;
  in_stack_000001a0 = 0;
  in_stack_000001a8 = 0;
  in_stack_00000190 = 0;
  in_stack_00000160 = 0;
  in_stack_00000168 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000128 = 0;
  _iStack0000000000000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  _iStack0000000000000118 = 0;
  in_stack_00000110 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_000000d8 = 0;
  in_stack_000000d0 = 0;
  in_stack_000000c8 = 0;
  lVar16 = *(long *)(unaff_x19 + 0x80);
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  if (lVar16 != 0) {
    uVar10 = FUN_06930d34(lVar16,*(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8),0);
    if ((uVar10 & 1) != 0) {
      lVar16 = *unaff_x23;
      if (*(int *)(lVar16 + 0xe0) == 0) {
        thunk_FUN_02f12b58();
        lVar16 = *unaff_x23;
      }
      lVar16 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar16 == 0) goto LAB_065e5220;
      FUN_03faeda0(&stack0x00000050,lVar16,*(undefined8 *)UnityEngine_GUIUtility_TypeInfo);
      puVar8 = System_IO_Compression_GZipStream_TypeInfo;
      puVar7 = System_Runtime_Serialization_GYearMonthDataContract_TypeInfo;
      puVar6 = UnityEngine_GUITargetAttribute_TypeInfo;
      puVar5 = UnityEngine_GUISkin_TypeInfo;
      puVar4 = UnityEngine_GUILayoutUtility_TypeInfo;
      puVar3 = UnityEngine_GUILayoutOption_TypeInfo;
      puVar2 = PTR_DAT_06d01e20;
      in_stack_00000178 = in_stack_00000058;
      in_stack_00000170 = in_stack_00000050;
      in_stack_00000188 = in_stack_00000068;
      in_stack_00000180 = in_stack_00000060;
      in_stack_00000190 = in_stack_00000070;
      while (uVar10 = FUN_04df01e4(&stack0x00000170,*(undefined8 *)puVar5),
            uVar9 = in_stack_00000188, uVar11 = in_stack_00000180, (uVar10 & 1) != 0) {
        if ((uint)in_stack_00000190 < 2) {
          if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          in_stack_000000b0 = in_stack_00000180;
          in_stack_000000b8 = in_stack_00000188;
          in_stack_000000c0 = in_stack_00000190;
          FUN_065fa694(*(long *)(unaff_x19 + 0x58),&stack0x000000b0,0);
        }
        else if ((uint)in_stack_00000190 == 2) {
          if (*(long *)(unaff_x19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_065fab88(*(long *)(unaff_x19 + 0x58),in_stack_00000180,in_stack_00000188,0);
          if (*(long *)(unaff_x19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_04c2a114(*(long *)(unaff_x19 + 0x60),uVar11,uVar9,*(undefined8 *)puVar4);
          if (*(long *)(unaff_x19 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          FUN_04c2d874(*(long *)(unaff_x19 + 0x70),uVar11,uVar9,*(undefined8 *)puVar3);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar10 = FUN_04627dec(*(long *)(unaff_x19 + 0x68),uVar11,uVar9,&stack0x00000168,
                                *(undefined8 *)puVar8);
          if ((uVar10 & 1) != 0) {
            if (*(long *)(unaff_x19 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02f080c0();
            }
            FUN_04627fbc(*(long *)(unaff_x19 + 0x68),uVar11,uVar9,*(undefined8 *)puVar7);
            uVar11 = in_stack_00000168;
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar10 = FUN_066c971c(uVar11,0,0);
            if ((uVar10 & 1) != 0) {
              lVar16 = *(long *)(unaff_x19 + 0x50);
              if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              lVar12 = *(long *)(lVar16 + 0x10);
              lVar14 = *(long *)puVar6;
              *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar1 = *(uint *)(lVar16 + 0x18);
              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar16 + 0x18) = uVar1 + 1;
                puVar13 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                *puVar13 = in_stack_00000168;
                thunk_FUN_02f411dc(puVar13);
              }
              else {
                FUN_03fd0c9c(lVar16,in_stack_00000168,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
        }
      }
      FUN_04df01e0(&stack0x00000170,*(undefined8 *)UnityEngine_GUIScrollGroup_TypeInfo);
    }
    puVar3 = System_Runtime_Serialization_GYearDataContract_TypeInfo;
    puVar2 = UnityEngine_GUIWordWrapSizer_TypeInfo;
    if (*(long *)(unaff_x19 + 0x80) != 0) {
      _in_stack_000001a0 = FUN_06931070(*(long *)(unaff_x19 + 0x80),2,0);
      FUN_0420e930(&stack0x00000050,&stack0x000001a0,*(undefined8 *)puVar3);
      puVar5 = UnityEngine_GUIStateObjects_TypeInfo;
      puVar4 = UnityEngine_GUISettings_TypeInfo;
      memcpy(&stack0x00000110,&stack0x00000050,0x58);
      puVar6 = System_IO_Compression_GZipStream_TypeInfo;
      puVar3 = PTR_DAT_06d01e20;
      lVar16 = *(long *)puVar5;
      iVar15 = iStack0000000000000120 + 1;
      _iStack0000000000000120 = CONCAT44(uStack0000000000000124,iVar15);
      if (iVar15 < iStack0000000000000118) {
        do {
          lVar12 = in_stack_00000110;
          if ((*(byte *)(*(long *)(lVar16 + 0x20) + 0x135) & 1) == 0) {
            FUN_02eea768();
          }
          puVar13 = (undefined8 *)(lVar12 + (long)iVar15 * 0x40);
          in_stack_00000078 = puVar13[5];
          in_stack_00000070 = puVar13[4];
          in_stack_00000088 = puVar13[7];
          in_stack_00000080 = puVar13[6];
          in_stack_00000058 = puVar13[1];
          in_stack_00000050 = *puVar13;
          in_stack_00000068 = puVar13[3];
          in_stack_00000060 = puVar13[2];
          in_stack_00000128 = in_stack_00000050;
          in_stack_00000130 = in_stack_00000058;
          in_stack_00000138 = in_stack_00000060;
          in_stack_00000140 = in_stack_00000068;
          in_stack_00000148 = in_stack_00000070;
          in_stack_00000150 = in_stack_00000078;
          in_stack_00000158 = in_stack_00000080;
          in_stack_00000160 = in_stack_00000088;
          FUN_065e5b00(&stack0x00000050);
          uVar9 = in_stack_00000058;
          uVar11 = in_stack_00000050;
          in_stack_000000d8 = in_stack_00000058;
          in_stack_000000d0 = in_stack_00000050;
          in_stack_000000e8 = in_stack_00000068;
          in_stack_000000e0 = in_stack_00000060;
          in_stack_000000f8 = in_stack_00000078;
          in_stack_000000f0 = in_stack_00000070;
          in_stack_00000108 = in_stack_00000088;
          in_stack_00000100 = in_stack_00000080;
          lVar16 = *(long *)(unaff_x19 + 0x68);
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_02f12b58();
          }
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f080c0();
          }
          uVar10 = FUN_04627dec(lVar16,uVar11,uVar9,&stack0x000000c8,*(undefined8 *)puVar6);
          lVar16 = in_stack_000000c8;
          if ((uVar10 & 1) != 0) {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_02f12b58();
            }
            uVar10 = FUN_066c971c(lVar16,0,0);
            if ((uVar10 & 1) != 0) {
              if (in_stack_000000c8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02f080c0();
              }
              uVar11 = FUN_066c67b0(in_stack_000000c8,0);
              if (*(int *)(*unaff_x23 + 0xe0) == 0) {
                thunk_FUN_02f12b58();
              }
              FUN_065e5bfc(uVar11,&stack0x000000d0);
            }
          }
          lVar16 = *(long *)puVar5;
          iVar15 = iStack0000000000000120 + 1;
          _iStack0000000000000120 = CONCAT44(uStack0000000000000124,iVar15);
        } while (iVar15 < iStack0000000000000118);
      }
      in_stack_00000160 = 0;
      in_stack_00000158 = 0;
      in_stack_00000150 = 0;
      in_stack_00000148 = 0;
      in_stack_00000140 = 0;
      in_stack_00000138 = 0;
      in_stack_00000130 = 0;
      in_stack_00000128 = 0;
      FUN_04df03e4(&stack0x00000110,*(undefined8 *)puVar4);
      FUN_0420e650(&stack0x000001a0,*(undefined8 *)puVar2);
      return;
    }
  }
LAB_065e5220:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


