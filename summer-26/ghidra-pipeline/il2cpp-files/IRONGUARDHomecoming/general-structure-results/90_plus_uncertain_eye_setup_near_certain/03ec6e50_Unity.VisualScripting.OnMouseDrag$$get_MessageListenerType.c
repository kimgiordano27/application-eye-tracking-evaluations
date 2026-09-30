/*
FUNCTION_NAME: Unity.VisualScripting.OnMouseDrag$$get_MessageListenerType
ENTRY_POINT: 03ec6e50
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03ec7160) */
/* WARNING: Removing unreachable block (ram,0x03ec71d4) */
/* WARNING: Removing unreachable block (ram,0x03ec7218) */

void Unity_VisualScripting_OnMouseDrag__get_MessageListenerType(code *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  long unaff_x20;
  long unaff_x21;
  
  plVar7 = (long *)(*param_1)();
  puVar6 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__;
  puVar5 = Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
  puVar4 = Method_UnityEngine_Component_TryGetComponent<SplineContainer>__;
  puVar3 = Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar11 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar2) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03ec6ed8;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03ec6ed8:
    uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
    if ((uVar14 & 1) == 0) {
      if (plVar7 == (long *)0x0) goto LAB_03ec7154;
      lVar11 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar14 == 0) goto Unity_VisualScripting_OnMouseInput__get_hookName;
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      break;
    }
    lVar11 = *plVar7;
    uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar14 != 0) {
      piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar15 + -2) == *(long *)puVar5) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
          goto LAB_03ec6f34;
        }
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 4;
      } while (uVar14 != 0);
    }
    puVar8 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar5,0);
LAB_03ec6f34:
    plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar9 != (long *)0x0) {
      lVar12 = *plVar9;
      lVar11 = *(long *)puVar4;
      bVar1 = *(byte *)(lVar12 + 0x130);
      uVar13 = (uint)bVar1;
      uVar14 = (ulong)*(byte *)(lVar11 + 0x130);
      if ((bVar1 < *(byte *)(lVar11 + 0x130)) ||
         (*(long *)(*(long *)(lVar12 + 200) + uVar14 * 8 + -8) != lVar11)) {
        lVar11 = *(long *)puVar6;
        uVar14 = (ulong)*(byte *)(lVar11 + 0x130);
        if ((*(byte *)(lVar11 + 0x130) <= bVar1) &&
           (*(long *)(*(long *)(lVar12 + 200) + uVar14 * 8 + -8) == lVar11)) {
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01ee6d7c();
            lVar12 = *plVar9;
            lVar11 = *(long *)puVar6;
            uVar13 = (uint)*(byte *)(lVar12 + 0x130);
            uVar14 = (ulong)*(byte *)(lVar11 + 0x130);
          }
          if ((uVar13 < (uint)uVar14) ||
             (*(long *)(*(long *)(lVar12 + 200) + uVar14 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc(plVar9);
          }
          uVar10 = FUN_03f666dc(plVar9,0);
          if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          lVar11 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          uVar13 = *(uint *)(unaff_x21 + 0x18);
          if (uVar13 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar13 + 1;
            *(undefined8 *)(lVar11 + (long)(int)uVar13 * 8 + 0x20) = uVar10;
            thunk_FUN_01f51358();
          }
          else {
            FUN_030f2bb4();
          }
        }
      }
      else {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
          lVar12 = *plVar9;
          lVar11 = *(long *)puVar4;
          uVar13 = (uint)*(byte *)(lVar12 + 0x130);
          uVar14 = (ulong)*(byte *)(lVar11 + 0x130);
        }
        if ((uVar13 < (uint)uVar14) ||
           (*(long *)(*(long *)(lVar12 + 200) + uVar14 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08cfc(plVar9);
        }
        uVar10 = FUN_03f65d30(plVar9,0);
        if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar11 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        uVar13 = *(uint *)(unaff_x21 + 0x18);
        if (uVar13 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar13 + 1;
          *(undefined8 *)(lVar11 + (long)(int)uVar13 * 8 + 0x20) = uVar10;
          thunk_FUN_01f51358();
        }
        else {
          FUN_030f2bb4();
        }
      }
    }
  } while( true );
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
    if (*(long *)(piVar15 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03ec7148;
    }
  }
Unity_VisualScripting_OnMouseInput__get_hookName:
  puVar8 = (undefined8 *)
           FUN_01ecb238(plVar7,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_03ec7148:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03ec7154:
  if (unaff_x21 != 0) {
    lVar11 = *(long *)(unaff_x20 + 0x18);
    FUN_030f4630();
    if ((lVar11 != 0) && (FUN_02b6b2e4(lVar11), *(long *)(unaff_x20 + 0x18) != 0)) {
      FUN_02b6b264();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


