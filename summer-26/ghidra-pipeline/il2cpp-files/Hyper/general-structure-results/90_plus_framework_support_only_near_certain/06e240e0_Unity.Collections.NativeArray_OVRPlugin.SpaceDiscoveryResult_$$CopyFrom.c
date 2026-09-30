/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopyFrom
ENTRY_POINT: 06e240e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopyFrom
               (long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong in_x9;
  int *in_x10;
  int *piVar6;
  long in_x11;
  long unaff_x19;
  long *plVar7;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long in_stack_00000008;
  undefined8 *in_stack_00000010;
  long *in_stack_00000018;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_06e24110;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_04980e68(unaff_x21,param_3,0);
LAB_06e24110:
        uVar2 = (*(code *)*puVar1)(unaff_x21,puVar1[1]);
        lVar3 = *(long *)(unaff_x20 + 0x10);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        uVar4 = *(uint *)(unaff_x20 + 0x18);
        if (uVar4 == *(uint *)(lVar3 + 0x18)) {
          FUN_06e2289c();
          uVar4 = *(uint *)(unaff_x20 + 0x18);
          lVar3 = *(long *)(unaff_x20 + 0x10);
          *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0494818c();
          }
        }
        else {
          *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
        }
        if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
        puVar1 = (undefined8 *)(lVar3 + (long)(int)uVar4 * 8 + 0x20);
        *puVar1 = uVar2;
        thunk_FUN_049ee3d8(puVar1,0);
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar3 = *in_stack_00000018;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *unaff_x23) {
              puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_06e2408c;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar1 = (undefined8 *)FUN_04980e68(in_stack_00000018,*unaff_x23,0);
LAB_06e2408c:
        uVar5 = (*(code *)*puVar1)(in_stack_00000018,puVar1[1]);
        if ((uVar5 & 1) == 0) {
          plVar7 = (long *)*in_stack_00000010;
          if (plVar7 == (long *)0x0) goto LAB_06e24244;
          lVar3 = *plVar7;
          uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar5 == 0) goto LAB_06e2421c;
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          goto LAB_06e24204;
        }
        if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        param_3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140);
        if ((*(ushort *)(param_3 + 0x135) & 1) == 0) {
          param_3 = FUN_04980b34(param_3);
        }
        param_1 = *in_stack_00000018;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
        unaff_x21 = in_stack_00000018;
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
LAB_06e24204:
    if (*(long *)(piVar6 + -2) == *unaff_x22) {
      puVar1 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_06e24238;
    }
  }
LAB_06e2421c:
  puVar1 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x22,0);
LAB_06e24238:
  (*(code *)*puVar1)(plVar7,puVar1[1]);
LAB_06e24244:
  if (in_stack_00000008 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948184();
}


