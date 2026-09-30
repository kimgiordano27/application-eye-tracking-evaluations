/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.Vector4s>
ENTRY_POINT: 02345f74
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02346360) */

void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_Vector4s>
               (long *param_1,long param_2,void *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong __n;
  undefined8 *__src;
  void *__s;
  ulong uVar10;
  void *__s_00;
  undefined8 *puVar11;
  void *__s_01;
  void *apvStack_30 [2];
  long lStack_20;
  undefined8 *puStack_18;
  char acStack_c [4];
  long lStack_8;
  undefined *puVar3;
  
  lStack_20 = tpidr_el0;
  lStack_8 = *(long *)(lStack_20 + 0x28);
  plVar9 = *(long **)(param_4 + 0x38);
  apvStack_30[1] = param_3;
  if (plVar9 == (long *)0x0) {
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_04230960);
    plVar9 = *(long **)(param_4 + 0x38);
    if (plVar9 == (long *)0x0) {
      FUN_01c723f0(param_4);
      plVar9 = *(long **)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(plVar9[5] + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __src = (undefined8 *)((long)apvStack_30 - uVar10);
  puVar11 = (undefined8 *)((long)__src - uVar10);
  __s_01 = (void *)((long)puVar11 - uVar10);
  memset(__s_01,0,__n);
  __s = (void *)((long)__s_01 - uVar10);
  memset(__s,0,__n);
  __s_00 = (void *)((long)__s - uVar10);
  memset(__s_00,0,__n);
  puVar3 = Unity_Services_Authentication_Internal_IPlayerId_TypeInfo;
  if ((param_1 == (long *)0x0) ||
     (puVar3 = System_Xml_IncrementalReadDummyDecoder_TypeInfo, param_2 == 0)) {
    uVar2 = thunk_FUN_01c273e8(puVar3);
    uVar2 = FUN_035dbefc(uVar2,0);
                    /* WARNING: Subroutine does not return */
    FUN_01c5d37c(uVar2,param_4);
  }
  lVar4 = *plVar9;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01c72394(lVar4);
  }
  lVar5 = *param_1;
  uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar10 != 0) {
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == lVar4) {
        puVar1 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_023460c0;
      }
      uVar10 = uVar10 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar10 != 0);
  }
  puVar1 = (undefined8 *)FUN_01c72498(param_1,lVar4,0);
LAB_023460c0:
  plVar9 = (long *)(*(code *)*puVar1)(param_1,puVar1[1]);
  puVar3 = PTR_DAT_04230960;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  do {
    lVar4 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar3) {
          puVar1 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_02346128;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    puVar1 = (undefined8 *)FUN_01c72498(plVar9,*(long *)puVar3,0);
LAB_02346128:
    uVar10 = (*(code *)*puVar1)(plVar9,puVar1[1]);
    if ((uVar10 & 1) == 0) {
      iVar8 = 0xb;
      iVar7 = 0xb;
      goto joined_r0x02346250;
    }
    lVar4 = *(long *)(*(long *)(param_4 + 0x38) + 0x18);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01c72394(lVar4);
    }
    lVar5 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar4) {
          lVar4 = lVar5 + (long)*piVar6 * 0x10 + 0x138;
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<byte>>
          ;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    lVar4 = FUN_01c72498(plVar9,lVar4,0);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<byte>>:
    lVar4 = *(long *)(lVar4 + 8);
    puStack_18 = __src;
    (**(code **)(lVar4 + 0x10))(*(undefined8 *)(lVar4 + 8),lVar4,plVar9,&puStack_18,__src);
    memcpy(__s_01,__src,__n);
    memcpy(puVar11,__s_01,__n);
    puStack_18 = puVar11;
    if (-1 < *(int *)(*(long *)(*(long *)(param_4 + 0x38) + 0x28) + 0x28)) {
      puStack_18 = (undefined8 *)*puVar11;
    }
    puVar1 = *(undefined8 **)(*(long *)(param_4 + 0x38) + 0x30);
    (*(code *)puVar1[2])(*puVar1,puVar1,param_2,&puStack_18,acStack_c);
  } while (acStack_c[0] == '\0');
  memcpy(__src,__s_01,__n);
  memcpy(__s,__src,__n);
  iVar8 = 10;
  iVar7 = 10;
joined_r0x02346250:
  if (plVar9 != (long *)0x0) {
    lVar4 = *plVar9;
    uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_0422fce8) {
          puVar11 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_023462a8;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_01c72498(plVar9,*(long *)PTR_DAT_0422fce8,0);
LAB_023462a8:
    (*(code *)*puVar11)(plVar9,puVar11[1]);
    iVar7 = iVar8;
  }
  if (iVar7 == 0xb) {
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<Vector2>>:
    memset(__s_00,0,__n);
    __s = __s_00;
  }
  else if (iVar7 != 10) {
    if (iVar7 != 0) goto LAB_02346300;
    goto 
    Unity_Collections_LowLevel_Unsafe_UnsafeUtility__SizeOf<UnsafeUtility_AlignOfHelper<Vector2>>;
  }
  memcpy(__src,__s,__n);
  memcpy(apvStack_30[1],__src,__n);
LAB_02346300:
  if (*(long *)(lStack_20 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


