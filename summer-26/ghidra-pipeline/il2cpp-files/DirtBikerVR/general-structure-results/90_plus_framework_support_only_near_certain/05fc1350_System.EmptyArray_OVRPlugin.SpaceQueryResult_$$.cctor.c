/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceQueryResult>$$.cctor
ENTRY_POINT: 05fc1350
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_EmptyArray<OVRPlugin_SpaceQueryResult>___cctor(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  int unaff_w20;
  ulong unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  undefined8 uVar8;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  int *unaff_x28;
  ulong unaff_x29;
  long in_stack_00000000;
  undefined4 *in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
code_r0x05fc1350:
  uVar8 = *(undefined8 *)(param_1 + 8);
  if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
    param_3 = FUN_03ac4090(param_3);
  }
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == param_3) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05fc13f4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03ac43c4(unaff_x23,param_3,0);
LAB_05fc13f4:
  uVar6 = (*(code *)*puVar3)(unaff_x23,uVar8);
  do {
    if ((uVar6 & 1) != 0) {
      if ((int)(uint)unaff_x26 < 0) {
        lVar5 = *(long *)(in_stack_00000018 + 0x10);
        if (lVar5 != 0) {
          if ((uint)in_stack_00000000 < *(uint *)(lVar5 + 0x18)) {
            *(int *)(lVar5 + in_stack_00000000 * 4 + 0x20) =
                 *(int *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x18 + 4) + 1;
            goto LAB_05fc14b4;
          }
          goto LAB_05fc14fc;
        }
      }
      else {
        lVar5 = *(long *)(in_stack_00000018 + 0x18);
        if (lVar5 != 0) {
          if ((uint)unaff_x26 < *(uint *)(lVar5 + 0x18)) {
            *(undefined4 *)(lVar5 + (unaff_x26 & 0xffffffff) * 0x18 + 0x24) =
                 *(undefined4 *)(unaff_x27 + (unaff_x29 & 0xffffffff) * 0x18 + 4);
LAB_05fc14b4:
            lVar5 = unaff_x27 + (unaff_x29 & 0xffffffff) * 0x18;
            *in_stack_00000008 = *(undefined4 *)(lVar5 + 0x10);
            uVar2 = *(undefined4 *)(in_stack_00000018 + 0x24);
            *unaff_x28 = -1;
            *(undefined8 *)(lVar5 + 8) = 0;
            *(undefined4 *)(lVar5 + 4) = uVar2;
            *(int *)(in_stack_00000018 + 0x24) = (int)unaff_x25;
            *(ulong *)(in_stack_00000018 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(in_stack_00000018 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(in_stack_00000018 + 0x28) + 1);
            return 1;
          }
LAB_05fc14fc:
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
      }
LAB_05fc14f8:
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    do {
      unaff_x26 = unaff_x25 & 0xffffffff;
      uVar1 = *(uint *)(unaff_x27 + (unaff_x29 & 0xffffffff) * (unaff_x21 & 0xffffffff) + 4);
      unaff_x25 = (ulong)uVar1;
      if ((int)uVar1 < 0) {
        *in_stack_00000008 = 0;
        return 0;
      }
      lVar5 = *(long *)(in_stack_00000018 + 0x18);
      if (lVar5 == 0) goto LAB_05fc14f8;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_05fc14fc;
      unaff_x27 = lVar5 + 0x20;
      unaff_x28 = (int *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff));
      unaff_x29 = unaff_x25;
    } while (*unaff_x28 != unaff_w20);
    unaff_x22 = *(long **)(in_stack_00000018 + 0x30);
    if (unaff_x22 != (long *)0x0) break;
    plVar4 = (long *)FUN_04036464(*(undefined8 *)
                                   (*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 0x18));
    if (plVar4 == (long *)0x0) goto LAB_05fc14f8;
    uVar6 = (**(code **)(*plVar4 + 0x1b8))
                      (plVar4,*(undefined8 *)(unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff) + 8))
    ;
  } while( true );
  param_3 = *(long *)(*(long *)(*(long *)(in_stack_00000010 + 0x20) + 0xc0) + 8);
  param_1 = unaff_x27 + unaff_x25 * (unaff_x21 & 0xffffffff);
  unaff_x23 = unaff_x22;
  goto code_r0x05fc1350;
}


