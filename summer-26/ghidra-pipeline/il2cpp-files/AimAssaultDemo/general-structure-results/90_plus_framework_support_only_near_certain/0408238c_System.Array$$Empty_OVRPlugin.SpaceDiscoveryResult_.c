/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0408238c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceDiscoveryResult>
               (code *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
  while( true ) {
    (*param_1)(param_2,param_3,param_4,param_5);
    lVar3 = *(long *)(unaff_x20 + 0x30);
                    /* try { // try from 04082394 to 041824af has its CatchHandler @ 04081f48 */
    if (lVar3 == 0) break;
    lVar4 = *(long *)(lVar3 + 0x10);
    lVar7 = *unaff_x26;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar5 = unaff_x21;
      thunk_FUN_037aeb94(plVar5,unaff_x21);
    }
    else {
      FUN_049ceef4(lVar3,unaff_x21,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                  );
    }
    unaff_w24 = unaff_w24 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_w24) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    param_4 = *(long *)(unaff_x19 + (long)(int)unaff_w24 * 8 + 0x20);
    if ((param_4 == 0) || (param_2 = *(long **)(unaff_x20 + 0x28), param_2 == (long *)0x0)) break;
    lVar3 = *param_2;
    param_3 = *(undefined8 *)(param_4 + 0x18);
    uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0408237c;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(param_2,*unaff_x25,1);
LAB_0408237c:
    param_1 = (code *)*puVar2;
    param_5 = puVar2[1];
    unaff_x21 = param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


