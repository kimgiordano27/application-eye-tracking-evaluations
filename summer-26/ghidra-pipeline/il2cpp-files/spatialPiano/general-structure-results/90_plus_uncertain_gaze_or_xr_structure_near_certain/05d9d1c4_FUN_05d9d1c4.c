/*
FUNCTION_NAME: FUN_05d9d1c4
ENTRY_POINT: 05d9d1c4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void FUN_05d9d1c4(long param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_38;
  
  if ((DAT_06bc3aad & 1) == 0) {
    FUN_02f08768(Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                );
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<StyleEnum<FlexDirection>>__);
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<StyleEnum<EasingMode>>__);
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<StyleEnum<FontStyle>>__);
    FUN_02f08768(Method_Unity_Properties_PropertyBag_Register<StyleEnum<EditorTextRenderingMode>>__)
    ;
    DAT_06bc3aad = 1;
  }
  local_38 = 0;
  if (*param_3 != 0) {
    local_38 = FUN_05d4c208(*param_3,*(undefined8 *)
                                      Method_System_Net_Sockets_NetworkStream_set_WriteTimeout__);
    FUN_05d9c2c0(param_1,param_1 + 200);
    FUN_05d9b844(param_1,param_1 + 0x158,&local_38);
    if (*(long *)(param_1 + 0x158) != 0) {
      bVar2 = *(byte *)(*(long *)(param_1 + 0x158) + 0x14);
      iVar9 = 1;
      if (bVar2 != 0) {
        iVar9 = 2;
      }
      puVar6 = (undefined8 *)FUN_05ddd98c(param_3 + 1,0);
      uVar7 = *puVar6;
      uVar12 = *(undefined8 *)((long)puVar6 + 0x14);
      uVar11 = *(undefined8 *)((long)puVar6 + 0xc);
      lVar8 = param_1 + 0x120;
      uVar14 = puVar6[5];
      uVar13 = puVar6[4];
      uVar1 = *(undefined4 *)(puVar6 + 6);
      *(undefined4 *)(param_1 + 0x128) = 1;
      iVar3 = 0;
      if (iVar9 != 0) {
        iVar3 = (int)uVar7 / iVar9;
      }
      *(undefined8 *)(param_1 + 0x120) = uVar7;
      *(undefined8 *)(param_1 + 0x134) = uVar12;
      *(undefined8 *)(param_1 + 300) = uVar11;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(undefined8 *)(param_1 + 0x148) = uVar14;
      *(undefined8 *)(param_1 + 0x140) = uVar13;
      *(undefined4 *)(param_1 + 0x150) = uVar1;
      iVar4 = 0;
      if (iVar9 != 0) {
        iVar4 = (int)((ulong)uVar7 >> 0x20) / iVar9;
      }
      *(int *)(param_1 + 0x120) = iVar3;
      *(int *)(param_1 + 0x124) = iVar4;
      if ((*(char *)(param_1 + 0xb8) == '\0') || (*(int *)(param_1 + 0x100) < 1)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0x10;
      }
      FUN_060d6ab0(lVar8,uVar7,0);
      puVar5 = 
      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
      ;
      lVar10 = *(long *)(param_1 + 0xf8);
      if (lVar10 != 0) {
        if (*(int *)(*(long *)
                      Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<OVRPlugin_Qpl_Annotation>__
                    + 0xe4) == 0) {
          thunk_FUN_02f6670c();
        }
        if (*(int *)(lVar10 + 0x18) == 0) {
LAB_05d9d4f8:
                    /* WARNING: Subroutine does not return */
          FUN_02f089d0();
        }
        FUN_05daf224(0,lVar10 + 0x20,lVar8,1,1,1,
                     *(undefined8 *)
                      Method_Unity_Properties_PropertyBag_Register<StyleEnum<EditorTextRenderingMode>>__
                     ,0);
        lVar10 = *(long *)(param_1 + 0xf8);
        if (lVar10 != 0) {
          if ((*(uint *)(lVar10 + 0x18) & 0xfffffffe) == 0) goto LAB_05d9d4f8;
          FUN_05daf224(0,lVar10 + 0x28,lVar8,1,1,1,
                       *(undefined8 *)
                        Method_Unity_Properties_PropertyBag_Register<StyleEnum<EasingMode>>__,0);
          lVar10 = *(long *)(param_1 + 0xf8);
          if (lVar10 != 0) {
            if (*(uint *)(lVar10 + 0x18) < 3) goto LAB_05d9d4f8;
            FUN_05daf224(0,lVar10 + 0x30,lVar8,1,1,1,
                         *(undefined8 *)
                          Method_Unity_Properties_PropertyBag_Register<StyleEnum<FlexDirection>>__,0
                        );
            uVar7 = NEON_ushl(*(undefined8 *)(param_1 + 0x120),(ulong)CONCAT14(bVar2,(uint)bVar2),4)
            ;
            *(undefined8 *)(param_1 + 0x120) = uVar7;
            FUN_060d6ab0(lVar8,(ulong)*(byte *)(param_1 + 0xb8) << 4,0);
            lVar10 = *(long *)(param_1 + 0xf8);
            if (lVar10 != 0) {
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                thunk_FUN_02f6670c();
              }
              if ((*(uint *)(lVar10 + 0x18) & 0xfffffffc) == 0) goto LAB_05d9d4f8;
              FUN_05daf224(0,lVar10 + 0x38,lVar8,1,1,1,
                           *(undefined8 *)
                            Method_Unity_Properties_PropertyBag_Register<StyleEnum<FontStyle>>__,0);
              lVar8 = *(long *)(param_1 + 0xf8);
              if (lVar8 != 0) {
                if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_05d9d4f8;
                FUN_05d95b90(param_2,*(undefined8 *)(lVar8 + 0x38));
                if (*(long *)(param_1 + 0x158) != 0) {
                  if (*(char *)(*(long *)(param_1 + 0x158) + 0x15) == '\0') {
                    lVar8 = *(long *)(param_1 + 0xf8);
                    if (lVar8 == 0) goto LAB_05d9d4f4;
                    if ((*(uint *)(lVar8 + 0x18) & 0xfffffffc) == 0) goto LAB_05d9d4f8;
                    uVar7 = *(undefined8 *)(lVar8 + 0x38);
                  }
                  else {
                    if (*(long *)(param_1 + 0x118) == 0) goto LAB_05d9d4f4;
                    uVar7 = FUN_05d5add8(*(long *)(param_1 + 0x118),0);
                  }
                  FUN_05d5a924(param_1,uVar7,0);
                  FUN_05d5aa50(0x3f800000,0x3f800000,0x3f800000,0x3f800000,param_1,0,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05d9d4f4:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


