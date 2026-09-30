/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange
ENTRY_POINT: 03698f00
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_10;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin_UnityOpenXR__OnAppSpaceChange(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  long *unaff_x23;
  undefined1 auVar9 [16];
  float unaff_s8;
  float fVar10;
  
  iVar2 = Oculus_Interaction_Surfaces_ColliderSurface__InjectAllColliderSurface();
  lVar3 = *unaff_x23;
  uVar1 = iVar2 - 1;
  uVar5 = 0;
  do {
    uVar4 = uVar5;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar3 = *unaff_x23;
    }
    lVar6 = **(long **)(lVar3 + 0xb8);
    if (lVar6 == 0) {
LAB_036990a4:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    puVar7 = *(uint **)(lVar6 + 0x10);
    if (uVar4 == (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU))) {
      if ((*puVar7 != 0) && (puVar7[4] != 0)) {
        fVar10 = *(float *)(lVar6 + 0x20);
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (fVar10 < unaff_s8) {
          uVar5 = 1;
          uVar4 = 0;
          goto LAB_0369906c;
        }
        lVar3 = **(long **)(*unaff_x23 + 0xb8);
        if (lVar3 == 0) goto LAB_036990a4;
        if ((uVar1 < **(uint **)(lVar3 + 0x10)) &&
           (lVar6 = *(long *)(*(uint **)(lVar3 + 0x10) + 4), (int)lVar6 != 0)) {
          if (unaff_s8 <= *(float *)(lVar3 + lVar6 * (int)uVar1 * 4 + 0x20)) {
            return ZEXT416(0x3f000000);
          }
          if (*(int *)(*unaff_x23 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
          }
          uVar4 = (ulong)(iVar2 - 2);
          uVar5 = (ulong)uVar1;
          goto LAB_0369906c;
        }
      }
LAB_036990a0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a44();
    }
    if ((*puVar7 <= uVar4) || ((int)*(long *)(puVar7 + 4) == 0)) goto LAB_036990a0;
    if (*(float *)(lVar6 + *(long *)(puVar7 + 4) * uVar4 * 4 + 0x20) <= unaff_s8) {
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01ee6d7c();
        lVar3 = *unaff_x23;
      }
      lVar6 = **(long **)(lVar3 + 0xb8);
      if (lVar6 == 0) goto LAB_036990a4;
      uVar5 = uVar4 + 1;
      if ((**(uint **)(lVar6 + 0x10) <= uVar5) ||
         (lVar8 = *(long *)(*(uint **)(lVar6 + 0x10) + 4), (int)lVar8 == 0)) goto LAB_036990a0;
      if (unaff_s8 < *(float *)(lVar6 + lVar8 * (int)uVar5 * 4 + 0x20)) {
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar4 = uVar4 & 0xffffffff;
        uVar5 = uVar5 & 0xffffffff;
LAB_0369906c:
        auVar9 = FUN_0369911c(uVar4,uVar5);
        return auVar9;
      }
    }
    else {
      uVar5 = uVar4 + 1;
    }
  } while( true );
}


