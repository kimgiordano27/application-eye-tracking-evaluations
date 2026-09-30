/*
FUNCTION_NAME: Unity.VisualScripting.OnMouseDown$$get_MessageListenerType
ENTRY_POINT: 03ec6d9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03ec7160) */
/* WARNING: Removing unreachable block (ram,0x03ec71d4) */
/* WARNING: Removing unreachable block (ram,0x03ec7218) */

void Unity_VisualScripting_OnMouseDown__get_MessageListenerType(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  int *piVar17;
  long *unaff_x20;
  
  uVar8 = FUN_02b6b4d8();
  if ((uVar8 & 1) == 0) {
    lVar9 = thunk_FUN_01f117cc(*(undefined8 *)PTR_DAT_0457bd28);
    FUN_030f2380(lVar9,*(undefined8 *)PTR_DAT_0457bd20);
    plVar10 = (long *)(**(code **)(*unaff_x20 + 0x218))();
    if (plVar10 != (long *)0x0) {
      lVar14 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar8 != 0) {
        piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar17 + -2) ==
              *(long *)Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__) {
            puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
            goto LAB_03ec6e48;
          }
          uVar8 = uVar8 - 1;
          piVar17 = piVar17 + 4;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined8 *)
                FUN_01ecb238(plVar10,*(long *)
                                      Method_Meta_WitAi_ComponentExtensions_Copy<AudioSource>__,0);
LAB_03ec6e48:
      plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
      puVar7 = PTR_DAT_0457bd10;
      puVar6 = Method_Unity_VisualScripting_ComponentHolderProtocol_GetComponentInParent__;
      puVar5 = Method_Meta_WitAi_ComponentExtensions_HasCustomAttributes<ObsoleteAttribute>__;
      puVar4 = Method_UnityEngine_Component_TryGetComponent<SplineContainer>__;
      puVar3 = Method_UnityEngine_Component_GetComponentsInChildren<MeshFilter>__;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar14 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar2) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03ec6ed8;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar2,0);
LAB_03ec6ed8:
        uVar8 = (*(code *)*puVar11)(plVar10,puVar11[1]);
        if ((uVar8 & 1) == 0) {
          if (plVar10 == (long *)0x0) goto LAB_03ec7154;
          lVar14 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 == 0) goto Unity_VisualScripting_OnMouseInput__get_hookName;
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          goto LAB_03ec7114;
        }
        lVar14 = *plVar10;
        uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar8 != 0) {
          piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar17 + -2) == *(long *)puVar5) {
              puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
              goto LAB_03ec6f34;
            }
            uVar8 = uVar8 - 1;
            piVar17 = piVar17 + 4;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined8 *)FUN_01ecb238(plVar10,*(long *)puVar5,0);
LAB_03ec6f34:
        plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
        if (plVar12 != (long *)0x0) {
          lVar15 = *plVar12;
          lVar14 = *(long *)puVar4;
          bVar1 = *(byte *)(lVar15 + 0x130);
          uVar16 = (uint)bVar1;
          uVar8 = (ulong)*(byte *)(lVar14 + 0x130);
          if ((bVar1 < *(byte *)(lVar14 + 0x130)) ||
             (*(long *)(*(long *)(lVar15 + 200) + uVar8 * 8 + -8) != lVar14)) {
            lVar14 = *(long *)puVar6;
            uVar8 = (ulong)*(byte *)(lVar14 + 0x130);
            if ((*(byte *)(lVar14 + 0x130) <= bVar1) &&
               (*(long *)(*(long *)(lVar15 + 200) + uVar8 * 8 + -8) == lVar14)) {
              if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
                thunk_FUN_01ee6d7c();
                lVar15 = *plVar12;
                lVar14 = *(long *)puVar6;
                uVar16 = (uint)*(byte *)(lVar15 + 0x130);
                uVar8 = (ulong)*(byte *)(lVar14 + 0x130);
              }
              if ((uVar16 < (uint)uVar8) ||
                 (*(long *)(*(long *)(lVar15 + 200) + uVar8 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08cfc(plVar12);
              }
              uVar13 = FUN_03f666dc(plVar12,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              lVar14 = *(long *)(lVar9 + 0x10);
              lVar15 = *(long *)puVar7;
              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
              if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_01f08a3c();
              }
              uVar16 = *(uint *)(lVar9 + 0x18);
              if (uVar16 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar9 + 0x18) = uVar16 + 1;
                *(undefined8 *)(lVar14 + (long)(int)uVar16 * 8 + 0x20) = uVar13;
                thunk_FUN_01f51358();
              }
              else {
                FUN_030f2bb4(lVar9,uVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
          else {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01ee6d7c();
              lVar15 = *plVar12;
              lVar14 = *(long *)puVar4;
              uVar16 = (uint)*(byte *)(lVar15 + 0x130);
              uVar8 = (ulong)*(byte *)(lVar14 + 0x130);
            }
            if ((uVar16 < (uint)uVar8) ||
               (*(long *)(*(long *)(lVar15 + 200) + uVar8 * 8 + -8) != lVar14)) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08cfc(plVar12);
            }
            uVar13 = FUN_03f65d30(plVar12,0);
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            lVar14 = *(long *)(lVar9 + 0x10);
            lVar15 = *(long *)puVar7;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            uVar16 = *(uint *)(lVar9 + 0x18);
            if (uVar16 < *(uint *)(lVar14 + 0x18)) {
              *(uint *)(lVar9 + 0x18) = uVar16 + 1;
              *(undefined8 *)(lVar14 + (long)(int)uVar16 * 8 + 0x20) = uVar13;
              thunk_FUN_01f51358();
            }
            else {
              FUN_030f2bb4(lVar9,uVar13,
                           *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      } while( true );
    }
    goto LAB_03ec71f8;
  }
  goto LAB_03ec71a0;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar17 = piVar17 + 4;
    if (uVar8 == 0) break;
LAB_03ec7114:
    if (*(long *)(piVar17 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar11 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_03ec7148;
    }
  }
Unity_VisualScripting_OnMouseInput__get_hookName:
  puVar11 = (undefined8 *)
            FUN_01ecb238(plVar10,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_03ec7148:
  (*(code *)*puVar11)(plVar10,puVar11[1]);
LAB_03ec7154:
  if (lVar9 == 0) goto LAB_03ec71f8;
  lVar14 = unaff_x20[3];
  FUN_030f4630(lVar9,*(undefined8 *)PTR_DAT_0457bd18);
  if (lVar14 == 0) goto LAB_03ec71f8;
  FUN_02b6b2e4(lVar14);
LAB_03ec71a0:
  if (unaff_x20[3] != 0) {
    FUN_02b6b264();
    return;
  }
LAB_03ec71f8:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


