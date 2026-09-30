/*
FUNCTION_NAME: FUN_06333bb8
ENTRY_POINT: 06333bb8
PROGRAM: Untangled-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_16;validity_or_gating_hits_14;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x06333fe0) */
/* WARNING: Removing unreachable block (ram,0x06333f28) */

void FUN_06333bb8(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  undefined8 local_1f0;
  undefined1 local_1e8 [200];
  undefined1 auStack_120 [200];
  long local_58;
  
  puVar3 = PTR_DAT_06d96a10;
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_1f0 = param_2;
  if ((DAT_071cd1a7 & 1) == 0) {
    FUN_02f07e70(
                System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
                );
    FUN_02f07e70(PTR_DAT_06d37100);
    FUN_02f07e70(PTR_DAT_06d96a10);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRCameraSubsystem_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_var);
    FUN_02f07e70(UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var);
    DAT_071cd1a7 = 1;
  }
  memset(auStack_120,0,0xc4);
  local_1f8[0] = 0;
  local_200[0] = 0;
  FUN_0633e538(local_1e8,param_1,*(undefined8 *)(param_1 + 0x110),param_3,
               *(undefined4 *)((long)param_3 + 0x18c),0);
  memcpy(auStack_120,local_1e8,0xc4);
  lVar5 = *param_3;
  FUN_062a6cd4(local_1f8,lVar5,*(undefined8 *)(param_1 + 0x118),0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_066f0aec(&local_1f0,lVar5,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_066e3124(lVar5,0);
  lVar4 = *(long *)(param_1 + 0x138);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c8();
  }
  lVar4 = *(long *)(lVar4 + 0x20);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  local_210 = *(undefined8 *)(lVar4 + 0x48);
  uStack_218 = *(undefined8 *)(lVar4 + 0x40);
  uStack_220 = *(undefined8 *)(lVar4 + 0x38);
  uStack_228 = *(undefined8 *)(lVar4 + 0x30);
  local_230 = *(undefined8 *)(lVar4 + 0x28);
  FUN_066e76f4(lVar5,*(undefined8 *)(lVar4 + 0x58),&local_230,0);
  lVar4 = *(long *)(param_1 + 0xe8);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (*(int *)(lVar4 + 0x10) - 1U < 2) {
    lVar4 = *(long *)(param_1 + 0x138);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar4 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    local_240 = *(undefined8 *)(lVar4 + 0x48);
    uStack_248 = *(undefined8 *)(lVar4 + 0x40);
    uStack_250 = *(undefined8 *)(lVar4 + 0x38);
    uStack_258 = *(undefined8 *)(lVar4 + 0x30);
    local_260 = *(undefined8 *)(lVar4 + 0x28);
    FUN_066e76f4(lVar5,*(undefined8 *)(lVar4 + 0x58),&local_260,0);
    lVar4 = *(long *)(param_1 + 0xe8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  if (*(int *)(lVar4 + 0x10) == 2) {
    lVar4 = *(long *)(param_1 + 0x138);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    if (*(uint *)(lVar4 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    lVar4 = *(long *)(lVar4 + 0x30);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    local_270 = *(undefined8 *)(lVar4 + 0x48);
    uStack_278 = *(undefined8 *)(lVar4 + 0x40);
    uStack_280 = *(undefined8 *)(lVar4 + 0x38);
    uStack_288 = *(undefined8 *)(lVar4 + 0x30);
    local_290 = *(undefined8 *)(lVar4 + 0x28);
    FUN_066e76f4(lVar5,*(undefined8 *)(lVar4 + 0x58),&local_290,0);
    lVar4 = *(long *)(param_1 + 0xe8);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
  }
  iVar1 = *(int *)(lVar4 + 0x10);
  if (*(int *)(*(long *)PTR_DAT_06d37100 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_062e012c(lVar5,*(undefined8 *)
                      UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRCameraSubsystem_var,iVar1 == 0,0
              );
  if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_062e012c(lVar5,*(undefined8 *)
                      UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRRaycastSubsystem_var,
               *(int *)(*(long *)(param_1 + 0xe8) + 0x10) == 1,0);
  if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_062e012c(lVar5,*(undefined8 *)UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRPlaneSubsystem_var
               ,*(int *)(*(long *)(param_1 + 0xe8) + 0x10) == 2,0);
  FUN_062e012c(lVar5,*(undefined8 *)
                      UnityEngine_XR_OpenXR_Features_Meta_MetaOpenXRSessionSubsystem_var,
               *(undefined1 *)(param_1 + 0x128),0);
  local_1e8[0] = 0;
  FUN_062a6cd4(local_1e8,lVar5,*(undefined8 *)(param_1 + 0x120),0);
  local_200[0] = local_1e8[0];
  lVar4 = *(long *)(param_1 + 0x138);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c8();
    }
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    if (*(int *)(*(long *)
                  System_Func<Expression,_string,_bool,_ReadOnlyCollection<ParameterExpression>,_LambdaExpression>_var
                + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_062d8cf0(0x3f800000,0x3f800000,0,0,lVar5,uVar6,uVar7,0,0);
    FUN_062a6cd8(local_200,0);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    FUN_066f0aec(&local_1f0,lVar5,0);
    FUN_066e3124(lVar5,0);
    if (*(long *)(param_1 + 0xe0) != 0) {
      FUN_06336c30(*(long *)(param_1 + 0xe0),lVar5,0);
      FUN_066f05d0(&local_1f0,param_3[1],param_3[2],auStack_120,param_1 + 0xf8,0);
      FUN_062a6cd8(local_1f8,0);
      if (*(long *)(lVar2 + 0x28) == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


