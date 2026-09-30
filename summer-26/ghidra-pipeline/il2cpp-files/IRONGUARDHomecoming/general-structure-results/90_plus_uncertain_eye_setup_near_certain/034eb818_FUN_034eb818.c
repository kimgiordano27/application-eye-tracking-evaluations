/*
FUNCTION_NAME: FUN_034eb818
ENTRY_POINT: 034eb818
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x034eba3c) */

uint FUN_034eb818(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  
  puVar1 = Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__;
  if ((DAT_04832e18 & 1) == 0) {
                    /* try { // try from 034eb848 to 035ebb8f has its CatchHandler @ 034eb848
                       catch() { ... } // from try @ 034eb848 with catch @ 034eb848
                       catch() { ... } // from try @ 034ebc60 with catch @ 034eb848
                       catch() { ... } // from try @ 034ebe70 with catch @ 034eb848
                       catch() { ... } // from try @ 034ec0a4 with catch @ 034eb848
                       catch() { ... } // from try @ 034ec0c4 with catch @ 034eb848
                       catch() { ... } // from try @ 034ec0d0 with catch @ 034eb848
                       catch() { ... } // from try @ 034ec0e0 with catch @ 034eb848
                       catch() { ... } // from try @ 034ec1d4 with catch @ 034eb848
                       catch() { ... } // from try @ 034ec288 with catch @ 034eb848 */
    thunk_FUN_01efb3a4(Method_System_Collections_Specialized_NameObjectCollectionBase_BaseAdd__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    DAT_04832e18 = 1;
  }
  plVar4 = (long *)thunk_FUN_01f117cc(*(undefined8 *)puVar1);
  FUN_034d43e8(plVar4,param_1,3,1,1,1,0);
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar5 = (**(code **)(*plVar4 + 0x1e8))(plVar4,*(undefined8 *)(*plVar4 + 0x1f0));
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  uVar12 = *(ulong *)(param_3 + 0x18);
  if (lVar5 == (int)uVar12) {
    if ((int)uVar12 < 1) {
      uVar13 = 1;
      uVar11 = 1;
    }
    else {
      uVar13 = 0;
      do {
        iVar3 = (**(code **)(*plVar4 + 0x328))
                          (plVar4,param_2,uVar13,uVar12 & 0xffffffff,
                           *(undefined8 *)(*plVar4 + 0x330));
        if (iVar3 == 0) {
          uVar7 = FUN_034c6b60(0);
          uVar8 = thunk_FUN_01efb3a4(Method_System_Net_WebReadStream_Write__);
                    /* WARNING: Subroutine does not return */
          FUN_01f08910(uVar7,uVar8);
        }
        uVar11 = iVar3 + uVar13;
        uVar2 = uVar13;
        if ((int)uVar13 < (int)uVar11) {
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          iVar9 = iVar3;
          do {
            if (*(uint *)(param_2 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(uint *)(param_3 + 0x18) <= uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a44();
            }
            if (*(char *)(param_2 + (int)uVar13 + 0x20) != *(char *)(param_3 + (int)uVar13 + 0x20))
            {
              uVar13 = 0;
              goto joined_r0x034eb980;
            }
            iVar9 = iVar9 + -1;
            uVar13 = uVar13 + 1;
            uVar2 = uVar11;
          } while (iVar9 != 0);
        }
        uVar13 = uVar2;
        uVar11 = (int)uVar12 - iVar3;
        uVar12 = (ulong)uVar11;
      } while (0 < (int)uVar11);
      uVar13 = 1;
joined_r0x034eb980:
      uVar11 = 1;
      if (plVar4 == (long *)0x0) goto LAB_034eb9ec;
    }
  }
  else {
    uVar13 = 0;
    uVar11 = 0;
  }
  lVar5 = *plVar4;
  uVar12 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar12 != 0) {
    piVar10 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == *(long *)puVar1) {
        puVar6 = (undefined8 *)(lVar5 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_034eb9e0;
      }
      uVar12 = uVar12 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar12 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
LAB_034eb9e0:
  (*(code *)*puVar6)(plVar4,puVar6[1]);
LAB_034eb9ec:
  return uVar11 & uVar13;
}


