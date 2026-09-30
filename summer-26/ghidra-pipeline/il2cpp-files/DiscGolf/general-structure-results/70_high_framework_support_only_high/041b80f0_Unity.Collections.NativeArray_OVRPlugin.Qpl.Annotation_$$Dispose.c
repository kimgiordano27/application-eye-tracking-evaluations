/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$Dispose
ENTRY_POINT: 041b80f0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__Dispose
               (long param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_60;
  long **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((DAT_06db6750 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fbff0);
    FUN_02d965b8(PTR_DAT_069fbff8);
    DAT_06db6750 = 1;
  }
  local_40 = 0;
  local_38 = (long *)0x0;
  local_50 = 0;
  uStack_48 = 0;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02dcfd18(lVar4);
  }
  lVar5 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == lVar4) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_041b81bc;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_02dd004c(param_2,lVar4,0);
LAB_041b81bc:
  plVar3 = (long *)(*(code *)*puVar2)(param_2,puVar2[1]);
  puVar1 = PTR_DAT_069fbff8;
  local_58 = &local_38;
  local_60 = 0;
  do {
    local_38 = plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_041b8234;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar3,*(long *)puVar1,0);
LAB_041b8234:
    uVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    plVar3 = local_38;
    if ((uVar7 & 1) == 0) {
      plVar3 = *local_58;
      if (plVar3 == (long *)0x0) goto LAB_041b8438;
      lVar4 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 == 0) goto LAB_041b8410;
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x140);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02dcfd18(lVar4);
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar4) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_041b82b8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c(plVar3,lVar4,0);
LAB_041b82b8:
    (*(code *)*puVar2)(&local_78,plVar3,puVar2[1]);
    lVar4 = *(long *)(param_1 + 0x10);
    uStack_48 = uStack_70;
    local_50 = local_78;
    local_40 = local_68;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    if (uVar6 == *(uint *)(lVar4 + 0x18)) {
      FUN_041b6948(param_1,uVar6 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78));
      uVar6 = *(uint *)(param_1 + 0x18);
      lVar4 = *(long *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x18) = uVar6 + 1;
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
    }
    else {
      *(uint *)(param_1 + 0x18) = uVar6 + 1;
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    lVar4 = lVar4 + (long)(int)uVar6 * 0x18;
    *(undefined8 *)(lVar4 + 0x28) = uStack_48;
    *(undefined8 *)(lVar4 + 0x20) = local_50;
    *(undefined8 *)(lVar4 + 0x30) = local_40;
    LeanTween__value(lVar4 + 0x20,0);
    plVar3 = local_38;
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_069fbff0) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_041b842c;
    }
  }
LAB_041b8410:
  puVar2 = (undefined8 *)FUN_02dd004c(plVar3,*(long *)PTR_DAT_069fbff0,0);
LAB_041b842c:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_041b8438:
  if (local_60 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


