/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.ForwardLights$$CreateForwardPlusBuffers
ENTRY_POINT: 03cfb208
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x03cfb574) */
/* WARNING: Removing unreachable block (ram,0x03cfb598) */
/* WARNING: Removing unreachable block (ram,0x03cfb5e8) */

undefined8
UnityEngine_Rendering_Universal_Internal_ForwardLights__CreateForwardPlusBuffers
          (undefined8 param_1,uint param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int *piVar17;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  puVar6 = PTR_DAT_04572d10;
  if ((DAT_04839ee2 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04572d30);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(PTR_DAT_04572c88);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    thunk_FUN_01efb3a4(PTR_DAT_04572d18);
    thunk_FUN_01efb3a4(PTR_DAT_04572d10);
    thunk_FUN_01efb3a4(PTR_DAT_04572d20);
    thunk_FUN_01efb3a4(PTR_DAT_04571900);
    thunk_FUN_01efb3a4(PTR_DAT_04571908);
    thunk_FUN_01efb3a4(PTR_DAT_04572c90);
    thunk_FUN_01efb3a4(PTR_DAT_04572d28);
    DAT_04839ee2 = 1;
  }
  puVar7 = PTR_DAT_04572d18;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000008 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  puVar6 = PTR_DAT_04572d28;
  _in_stack_00000008 = FUN_030380ec(&stack0x00000018,*(undefined8 *)puVar7);
  puVar7 = PTR_DAT_04572d30;
  if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar12 = *param_3;
  uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
  if (uVar13 != 0) {
    piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
    do {
      if (*(long *)(piVar17 + -2) == *(long *)PTR_DAT_04572d30) {
        puVar9 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
        goto LAB_03cfb348;
      }
      uVar13 = uVar13 - 1;
      piVar17 = piVar17 + 4;
    } while (uVar13 != 0);
  }
  puVar9 = (undefined8 *)FUN_01ecb238(param_3,*(long *)PTR_DAT_04572d30,0);
LAB_03cfb348:
  lVar12 = (*(code *)*puVar9)(param_3,puVar9[1]);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  plVar10 = (long *)FUN_025d9d24(lVar12,*(undefined8 *)PTR_DAT_04572c90);
  puVar8 = PTR_DAT_04572d20;
  puVar5 = PTR_DAT_04572c88;
  puVar4 = PTR_DAT_04571900;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar3) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto UnityEngine_Rendering_Universal_Internal_ForwardLights__get_reflectionProbeManager;
        }
        uVar13 = uVar13 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar3,0);
UnityEngine_Rendering_Universal_Internal_ForwardLights__get_reflectionProbeManager:
    uVar13 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if ((uVar13 & 1) == 0) {
      if (plVar10 == (long *)0x0) goto LAB_03cfb568;
      lVar12 = *plVar10;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 == 0) goto LAB_03cfb540;
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      break;
    }
    lVar12 = *plVar10;
    uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar13 != 0) {
      piVar17 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
          puVar9 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_03cfb440;
        }
        uVar13 = uVar13 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar13 != 0);
    }
    puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_03cfb440:
    lVar12 = (*(code *)*puVar9)(plVar10,puVar9[1]);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if ((param_2 & (*(uint *)(lVar12 + 0x20) ^ 0xffffffff)) == 0) {
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar14 = *(long *)(in_stack_00000018 + 0x10);
      lVar16 = *(long *)puVar4;
      *(int *)(in_stack_00000018 + 0x1c) = *(int *)(in_stack_00000018 + 0x1c) + 1;
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(in_stack_00000018 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(in_stack_00000018 + 0x18) = uVar1 + 1;
        plVar15 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
        *plVar15 = lVar12;
        thunk_FUN_01f51358(plVar15,lVar12);
      }
      else {
        FUN_030f2bb4(in_stack_00000018,lVar12,
                     *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
      }
    }
    else {
      lVar14 = thunk_FUN_01f116d0(lVar12,*(undefined8 *)puVar7);
      lVar12 = in_stack_00000018;
      if (lVar14 != 0) {
        uVar11 = FUN_03cfb1f0(param_1,param_2,lVar14);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c(uVar11,uVar11);
        }
        FUN_030f2dc0(lVar12,uVar11,*(undefined8 *)puVar8);
      }
    }
  } while( true );
  while( true ) {
    uVar13 = uVar13 - 1;
    piVar17 = piVar17 + 4;
    if (uVar13 == 0) break;
    if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
      puVar9 = (undefined8 *)(lVar12 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03cfb55c;
    }
  }
LAB_03cfb540:
  puVar9 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03cfb55c:
  (*(code *)*puVar9)(plVar10,puVar9[1]);
LAB_03cfb568:
  if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar11 = FUN_030f4630(in_stack_00000018,*(undefined8 *)PTR_DAT_04571908);
  FUN_025ecba8(&stack0x00000008,*(undefined8 *)puVar6);
  return uVar11;
}


