/*
FUNCTION_NAME: System.Array$$Empty<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 040823e8
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__Empty<OVRPlugin_SpaceQueryResult>(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 uVar8;
  uint unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  
code_r0x040823e8:
  FUN_049ceef4(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  do {
    unaff_w24 = unaff_w24 + 1;
    if ((int)*(uint *)(unaff_x19 + 0x18) <= (int)unaff_w24) {
      return;
    }
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w24) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7bc();
    }
    param_3 = *(long *)(unaff_x19 + (long)(int)unaff_w24 * 8 + 0x20);
    if ((param_3 == 0) || (plVar7 = *(long **)(unaff_x20 + 0x28), plVar7 == (long *)0x0)) {
LAB_04082420:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar3 = *plVar7;
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x25) {
          puVar2 = (undefined8 *)(lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_0408237c;
        }
        uVar4 = uVar4 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_0377596c(plVar7,*unaff_x25,1);
LAB_0408237c:
    (*(code *)*puVar2)(plVar7,uVar8,param_3,puVar2[1]);
    param_2 = *(long *)(unaff_x20 + 0x30);
    if (param_2 == 0) goto LAB_04082420;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar5 = *unaff_x26;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar3 == 0) goto LAB_04082420;
    uVar1 = *(uint *)(param_2 + 0x18);
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
    plVar7 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
    *plVar7 = param_3;
    thunk_FUN_037aeb94(plVar7,param_3);
  } while( true );
  param_1 = *(long *)(lVar5 + 0x20);
  goto code_r0x040823e8;
}


