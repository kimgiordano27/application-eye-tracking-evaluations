/*
FUNCTION_NAME: FUN_05d44d20
ENTRY_POINT: 05d44d20
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 121
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x05d45408) */

void FUN_05d44d20(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long local_60;
  long *local_58;
  
  puVar6 = Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
  ;
  if ((DAT_06bc3883 & 1) == 0) {
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XrCompositionLayerProjectionView>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<Vector3>__
                );
    FUN_02f08768(
                Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                );
    FUN_02f08768(PTR_DAT_067c91b0);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                );
                    /* try { // try from 05d44da4 to 05e44dab has its CatchHandler @ 05d44e3c */
    FUN_02f08768(Method_System_Globalization_DateTimeFormatInfo_GetMonthName__);
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
                );
                    /* try { // try from 05d44dc0 to 05e44dc3 has its CatchHandler @ 05d44e38 */
                    /* try { // try from 05d44dc4 to 05e44e2b has its CatchHandler @ 05d44cd8 */
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__
                );
    FUN_02f08768(
                Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                );
    DAT_06bc3883 = 1;
  }
  local_60 = 0;
  local_58 = (long *)0x0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* try { // try from 05d44e2c to 05e44e2f has its CatchHandler @ 05d44e34 */
                    /* try { // try from 05d44e30 to 05e44e57 has its CatchHandler @ 05d44cd8 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d44e2c with catch @ 05d44e34
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d44dc0 with catch @ 05d44e38
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05d44da4 with catch @ 05d44e3c
                        */
  local_58 = (long *)FUN_03523990(param_2,*(undefined8 *)
                                           Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ColorScaleBiasExtension_Native_XrCompositionLayerColorScaleBiasKHR>__
                                  ,&local_60,
                                  *(undefined8 *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x98),
                                  *(undefined8 *)
                                   Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr<AttachmentDescriptor>__
                                  ,0x1b2,*(undefined8 *)
                                          Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceQueryResult>__
                                 );
                    /* try { // try from 05d44e58 to 05e44e5b has its CatchHandler @ 05d44e74 */
                    /* try { // try from 05d44e5c to 05e44e77 has its CatchHandler @ 05d44cd8 */
  FUN_05d44674(param_1,local_60,param_3,param_4 & 1);
  lVar9 = local_60;
  if (*(long *)(param_1 + 0x78) != 0) {
                    /* catch() { ... } // from try @ 05d44e58 with catch @ 05d44e74 */
    auVar15 = FUN_05cc6300(param_2,*(long *)(param_1 + 0x78),0);
                    /* try { // try from 05d44e78 to 05e44e7f has its CatchHandler @ 05d44e88 */
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
                    /* try { // try from 05d44e80 to 05e44e8b has its CatchHandler @ 05d44cd8 */
    *(undefined1 (*) [16])(lVar9 + 0x14) = auVar15;
  }
  lVar9 = local_60;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05d44e78 with catch @ 05d44e88
                        */
  if (*(long *)(param_1 + 0x80) != 0) {
    auVar15 = FUN_05cc6300(param_2,*(long *)(param_1 + 0x80),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    *(undefined1 (*) [16])(lVar9 + 0x4c) = auVar15;
  }
  plVar7 = local_58;
  puVar5 = Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
  ;
  if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar9 = *local_58;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) ==
          *(long *)
           Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
         ) {
        puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 0xc) * 0x10 + 0x138);
        goto LAB_05d44f08;
      }
      uVar13 = uVar13 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar13 != 0);
  }
  puVar8 = (undefined8 *)
           FUN_02f421d0(local_58,*(long *)
                                  Method_UnityEngine_TextCore_Text_FontAsset_InitializeLookup<MarkToBaseAdjustmentRecord>__
                        ,0xc);
LAB_05d44f08:
  (*(code *)*puVar8)(plVar7,1,puVar8[1]);
  lVar9 = local_60;
  puVar4 = Method_System_Globalization_DateTimeFormatInfo_GetMonthName__;
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(*(long *)Method_System_Globalization_DateTimeFormatInfo_GetMonthName__ + 0xe4) == 0)
  {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc2ec1 == '\0') {
    FUN_02f08768(PTR_DAT_067ce608);
    DAT_06bc2ec1 = '\x01';
  }
  puVar3 = PTR_DAT_067ce608;
  if (*(int *)(*(long *)PTR_DAT_067ce608 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc2ec2 == '\0') {
    FUN_02f08768(PTR_DAT_067ce608);
    DAT_06bc2ec2 = '\x01';
  }
  iVar2 = (uint)*(ushort *)(lVar9 + 0x16) << 0x10;
  if (*(ushort *)(lVar9 + 0x16) != 0) {
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar9 = *(long *)puVar3;
    }
    piVar10 = *(int **)(lVar9 + 0xb8);
    if (iVar2 != *piVar10) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        piVar10 = *(int **)(*(long *)puVar3 + 0xb8);
      }
      if (iVar2 != piVar10[1]) goto LAB_05d450c8;
    }
    plVar7 = local_58;
    lVar9 = local_60;
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *local_58;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05d4503c;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(local_58,*(long *)puVar5,0);
LAB_05d4503c:
                    /* try { // try from 05d45040 to 05e450e3 has its CatchHandler @ 05d45040
                       catch() { ... } // from try @ 05d45040 with catch @ 05d45040
                       catch() { ... } // from try @ 05d45124 with catch @ 05d45040
                       catch() { ... } // from try @ 05d45170 with catch @ 05d45040
                       catch() { ... } // from try @ 05d451a0 with catch @ 05d45040
                       catch() { ... } // from try @ 05d451c4 with catch @ 05d45040 */
    (*(code *)*puVar8)(plVar7,lVar9 + 0x14,1,puVar8[1]);
    plVar7 = local_58;
    lVar9 = local_60;
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *local_58;
    uVar1 = *(undefined4 *)(local_60 + 0x24);
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_05d450b4;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(local_58,*(long *)puVar5,3);
LAB_05d450b4:
    (*(code *)*puVar8)(plVar7,lVar9 + 0x14,uVar1,puVar8[1]);
  }
LAB_05d450c8:
  lVar9 = local_60;
  if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
                    /* try { // try from 05d450e4 to 05e450eb has its CatchHandler @ 05d45184 */
  if (DAT_06bc2ec1 == '\0') {
    FUN_02f08768(PTR_DAT_067ce608);
    DAT_06bc2ec1 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  if (DAT_06bc2ec2 == '\0') {
    FUN_02f08768(PTR_DAT_067ce608);
                    /* try { // try from 05d45120 to 05e45123 has its CatchHandler @ 05d45180 */
                    /* try { // try from 05d45124 to 05e45163 has its CatchHandler @ 05d45040 */
    DAT_06bc2ec2 = '\x01';
  }
  iVar2 = (uint)*(ushort *)(lVar9 + 0x4e) << 0x10;
  if (*(ushort *)(lVar9 + 0x4e) != 0) {
    lVar9 = *(long *)puVar3;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar9 = *(long *)puVar3;
    }
    piVar10 = *(int **)(lVar9 + 0xb8);
    if (iVar2 != *piVar10) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
        piVar10 = *(int **)(*(long *)puVar3 + 0xb8);
      }
      if (iVar2 != piVar10[1]) goto LAB_05d45278;
    }
    plVar7 = local_58;
    lVar9 = local_60;
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *local_58;
    uVar13 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05d451d4;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(local_58,*(long *)puVar5,0);
LAB_05d451d4:
    (*(code *)*puVar8)(plVar7,lVar9 + 0x4c,1,puVar8[1]);
    plVar7 = local_58;
    lVar9 = local_60;
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar11 = *(long *)puVar6;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar11 = *(long *)puVar6;
    }
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar12 = *plVar7;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    uVar1 = *(undefined4 *)(*(long *)(lVar11 + 0xb8) + 0x10);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar10 + 3) * 0x10 + 0x138);
          goto LAB_05d45264;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)puVar5,3);
LAB_05d45264:
    (*(code *)*puVar8)(plVar7,lVar9 + 0x4c,uVar1,puVar8[1]);
  }
LAB_05d45278:
  plVar7 = local_58;
  puVar6 = 
  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__
  ;
  lVar9 = *(long *)
           Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<AlphaBlendExtension_Native_XrCompositionLayerAlphaBlendFB>__
  ;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar9 = *(long *)puVar6;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0xb8);
  lVar11 = puVar8[1];
  if (lVar11 == 0) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      puVar8 = *(undefined8 **)(*(long *)puVar6 + 0xb8);
    }
    uVar14 = *puVar8;
    lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                 Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<XrCompositionLayerProjectionView>__
                               );
    FUN_04237db8(lVar11,uVar14,
                 *(undefined8 *)
                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ProbeBrickIndex_Brick>__
                 ,0);
    *(long *)(*(long *)(*(long *)puVar6 + 0xb8) + 8) = lVar11;
  }
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
  lVar9 = *plVar7;
  lVar12 = *(long *)
            Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<OVRPlugin_SpaceDiscoveryResult>__
  ;
  uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar13 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)(lVar12 + 0x20)) {
        lVar9 = lVar9 + (long)(int)(*piVar10 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
        goto LAB_05d45354;
      }
      uVar13 = uVar13 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar13 != 0);
  }
  lVar9 = FUN_02f421d0(plVar7);
LAB_05d45354:
  lVar9 = thunk_FUN_02f2742c(*(undefined8 *)(lVar9 + 8),lVar12);
  (**(code **)(lVar9 + 8))(plVar7,lVar11,lVar9);
  plVar7 = local_58;
  if (local_58 != (long *)0x0) {
    lVar9 = *local_58;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_067c91b0) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_05d453d8;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    puVar8 = (undefined8 *)FUN_02f421d0(local_58,*(long *)PTR_DAT_067c91b0,0);
LAB_05d453d8:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  return;
}


