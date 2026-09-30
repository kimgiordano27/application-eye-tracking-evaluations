/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$WorldPosToNonNormalizedTextureCoords
ENTRY_POINT: 08a27a04
PROGRAM: Hyper-libil2cpp.so
SCORE: 112
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_EnvironmentDepthRaycaster__WorldPosToNonNormalizedTextureCoords(int *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  long *in_stack_00000048;
  
  if ((DAT_0b32c316 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac52588);
    FUN_04947ee4(PTR_DAT_0ac52598);
    FUN_04947ee4(PTR_DAT_0ac525a0);
    FUN_04947ee4(PTR_DAT_0ac111a0);
    FUN_04947ee4(PTR_DAT_0ac0a9b8);
    FUN_04947ee4(PTR_DAT_0ac395c8);
    FUN_04947ee4(PTR_DAT_0ac09b88);
    FUN_04947ee4(PTR_DAT_0ac525a8);
    FUN_04947ee4(PTR_DAT_0ac10af0);
    FUN_04947ee4(PTR_DAT_0ac09c40);
    DAT_0b32c316 = 1;
  }
  puVar4 = PTR_DAT_0ac111a0;
  puVar2 = PTR_DAT_0ac09b88;
  lVar12 = *(long *)(param_1 + 10);
  in_stack_00000040 = 0;
  in_stack_00000048 = (long *)0x0;
  in_stack_00000038 = 0;
  if (*param_1 == 0) {
    plVar6 = (long *)(param_1 + 0xc);
    plVar10 = (long *)*plVar6;
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)PTR_DAT_0ac525a8 + 0x130);
      if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_0ac525a8)
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(plVar10);
      }
    }
    *plVar6 = 0;
    in_stack_00000048 = plVar10;
    thunk_FUN_049ee3d8(plVar6,0);
    *param_1 = -1;
LAB_08a27b8c:
    if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_08a37b68(in_stack_00000048,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar9 = FUN_08d59ac8(0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar9 = FUN_08d5b504(uVar9,*(undefined8 *)(lVar12 + 0x88),0);
    puVar3 = PTR_DAT_0ac52588;
    lVar7 = *(long *)PTR_DAT_0ac52588;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar7 = *(long *)puVar3;
    }
    puVar3 = PTR_DAT_0ac09c40;
    uVar11 = **(undefined8 **)(lVar7 + 0xb8);
    if (*(int *)(*(long *)PTR_DAT_0ac09c40 + 0xe4) == 0) {
      thunk_FUN_049a583c(*(long *)PTR_DAT_0ac09c40);
    }
    uVar9 = FUN_08d93358(uVar11,uVar9,0);
    uVar8 = FUN_08d93644(uVar9,**(undefined8 **)(*(long *)puVar3 + 0xb8),0);
    if ((uVar8 & 1) == 0) goto LAB_08a27c90;
    uVar11 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)PTR_DAT_0ac10af0 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    lVar7 = FUN_08dfc718(uVar9,uVar11,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000040 = FUN_08df2f04(lVar7,0);
    uVar8 = FUN_08c80df8(&stack0x00000040,0);
    if ((uVar8 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0xe) = in_stack_00000040;
      thunk_FUN_049ee3d8(param_1 + 0xe,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_05a28648(param_1 + 2,&stack0x00000040,param_1,*(undefined8 *)PTR_DAT_0ac525a0);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      if (*(int *)(*(long *)PTR_DAT_0ac0a9b8 + 0xe4) == 0) {
        thunk_FUN_049a583c();
      }
      FUN_08ddff68(param_1 + 8,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000048 = (long *)FUN_08a37ae0(*(undefined8 *)(lVar12 + 0x10),0);
      if (in_stack_00000048 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      uVar8 = FUN_08a37b48(in_stack_00000048,0);
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        *(long **)(param_1 + 0xc) = in_stack_00000048;
        thunk_FUN_049ee3d8();
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_049a583c();
        }
        FUN_05a1e574(param_1 + 2,&stack0x00000048,param_1,*(undefined8 *)PTR_DAT_0ac52598);
        return;
      }
      goto LAB_08a27b8c;
    }
    in_stack_00000040 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  FUN_08c80ec0(&stack0x00000040,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
LAB_08a27c90:
  puVar5 = PTR_DAT_0ac395c8;
  puVar3 = PTR_DAT_0ac0a9b8;
  lVar7 = *(long *)(lVar12 + 0x18);
  while( true ) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    uVar8 = FUN_0845cb74(lVar7,&stack0x00000038,*(undefined8 *)puVar5);
    if ((uVar8 & 1) == 0) break;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    FUN_08ddff68(param_1 + 8,0);
    if (in_stack_00000038 != 0) {
      (**(code **)(in_stack_00000038 + 0x18))
                (*(undefined8 *)(in_stack_00000038 + 0x40),*(undefined8 *)(in_stack_00000038 + 0x28)
                );
    }
    lVar7 = *(long *)(lVar12 + 0x18);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar9 = FUN_08d59ac8(0);
  *(undefined8 *)(lVar12 + 0x88) = uVar9;
  lVar12 = *(long *)puVar4;
  *param_1 = -2;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  FUN_08c7f478(param_1 + 2,0);
  return;
}


