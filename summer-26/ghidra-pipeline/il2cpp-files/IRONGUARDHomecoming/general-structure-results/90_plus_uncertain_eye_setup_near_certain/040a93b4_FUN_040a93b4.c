/*
FUNCTION_NAME: FUN_040a93b4
ENTRY_POINT: 040a93b4
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 129
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x040a95d0) */

void FUN_040a93b4(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
  if ((DAT_0483f4b9 & 1) == 0) {
    thunk_FUN_01efb3a4(PTR_DAT_04587f18);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483f4b9 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x60) = 0;
    if (*(long *)(param_1 + 0x18) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x60) = 0;
      puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
      plVar5 = *(long **)(param_1 + 0x20);
      if (plVar5 != (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        puVar4 = PTR_DAT_04587f18;
        puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        do {
          lVar9 = *plVar5;
          lVar8 = *(long *)puVar3;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_040a9498;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_040a9498:
          uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
          if ((uVar10 & 1) == 0) {
            plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)puVar2);
            if (plVar5 == (long *)0x0) {
              return;
            }
            lVar9 = *plVar5;
            lVar8 = *(long *)puVar2;
            uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar10 == 0) goto LAB_040a9584;
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            goto LAB_040a956c;
          }
          lVar9 = *plVar5;
          lVar8 = *(long *)puVar3;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == lVar8) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                goto LAB_040a94f8;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,1);
LAB_040a94f8:
          plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08cfc();
          }
          *(undefined4 *)(plVar7 + 0xc) = 0;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_040a956c:
    if (*(long *)(piVar11 + -2) == lVar8) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_040a95a0;
    }
  }
LAB_040a9584:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_040a95a0:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}


