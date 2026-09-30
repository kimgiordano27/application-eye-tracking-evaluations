/*
FUNCTION_NAME: FUN_04128c9c
ENTRY_POINT: 04128c9c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_16;functionality_eye_api_context_without_clear_sink_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x04129104) */

void FUN_04128c9c(long *param_1,int param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
                    /* catch() { ... } // from try @ 04128c84 with catch @ 04128ca0 */
                    /* try { // try from 04128ca4 to 04228ca7 has its CatchHandler @ 04128cbc */
                    /* try { // try from 04128ca8 to 04228cb3 has its CatchHandler @ 04128c48 */
                    /* try { // try from 04128cb4 to 04228cbb has its CatchHandler @ 04128cbc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04128ca4 with catch @ 04128cbc
                       catch(type#2 @ 00000000) { ... } // from try @ 04128cb4 with catch @ 04128cbc
                        */
                    /* catch() { ... } // from try @ 04128cf4 with catch @ 04128cc0
                       catch() { ... } // from try @ 04128d28 with catch @ 04128cc0
                       catch() { ... } // from try @ 04128d48 with catch @ 04128cc0 */
  if ((DAT_04840785 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_System_Linq_Enumerable_Where<Member>__);
                    /* try { // try from 04128cd8 to 04228cf3 has its CatchHandler @ 04128d0c */
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_System_DateTime_AddMonths__);
                    /* try { // try from 04128cf4 to 04228d23 has its CatchHandler @ 04128cc0 */
    thunk_FUN_01efb3a4(Method_System_DateTime_AddTicks__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 04128cd8 with catch @ 04128d0c
                        */
    thunk_FUN_01efb3a4(PTR_DAT_0458a418);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<int>_Dispose__);
                    /* try { // try from 04128d24 to 04228d27 has its CatchHandler @ 04128d40 */
                    /* try { // try from 04128d28 to 04228d43 has its CatchHandler @ 04128cc0 */
    thunk_FUN_01efb3a4(PTR_DAT_0458a420);
    thunk_FUN_01efb3a4(PTR_DAT_0458a3f0);
    DAT_04840785 = 1;
  }
                    /* catch() { ... } // from try @ 04128d24 with catch @ 04128d40 */
                    /* try { // try from 04128d44 to 04228d47 has its CatchHandler @ 04128d5c */
                    /* try { // try from 04128d48 to 04228d53 has its CatchHandler @ 04128cc0 */
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uVar9 = FUN_04127fac(param_1,param_2);
                    /* try { // try from 04128d54 to 04228d5b has its CatchHandler @ 04128d5c */
  if ((uVar9 & 1) == 0) {
    return;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 04128d44 with catch @ 04128d5c
                       catch(type#2 @ 00000000) { ... } // from try @ 04128d54 with catch @ 04128d5c
                        */
                    /* catch() { ... } // from try @ 04128d6c with catch @ 04128d60
                       catch() { ... } // from try @ 04128da0 with catch @ 04128d60
                       catch() { ... } // from try @ 04128dc0 with catch @ 04128d60 */
  uVar5 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x200));
  uVar9 = (**(code **)(*param_1 + 0x2e8))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x2f0));
  if ((uVar9 & 1) == 0) {
    return;
  }
  if ((param_3 & 1) != 0) {
    uVar10 = (**(code **)(*param_1 + 0x2b8))(param_1,uVar5,*(undefined8 *)(*param_1 + 0x2c0));
    plVar11 = (long *)(**(code **)(*param_1 + 0x298))
                                (param_1,uVar10,*(undefined8 *)(*param_1 + 0x2a0));
    if (plVar11 != (long *)0x0) {
      lVar13 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)Method_System_DateTime_AddMonths__) {
            puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_04128e1c;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)Method_System_DateTime_AddMonths__,0);
LAB_04128e1c:
      plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
      puVar4 = Method_System_DateTime_AddTicks__;
      puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
      puVar2 = Method_Unity_Collections_NativeArray<int>_Dispose__;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      do {
        lVar13 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04128e94;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar3,0);
LAB_04128e94:
        uVar9 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        if ((uVar9 & 1) == 0) {
          if (plVar11 == (long *)0x0) goto LAB_04128f90;
          lVar13 = *plVar11;
          uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar9 == 0) goto LAB_04128f64;
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_04128f4c;
        }
        lVar13 = *plVar11;
        uVar9 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar9 != 0) {
          piVar14 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar4) {
              puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_04128ef0;
            }
            uVar9 = uVar9 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar9 != 0);
        }
        puVar12 = (undefined8 *)FUN_01ecb238(plVar11,*(long *)puVar4,0);
LAB_04128ef0:
        uVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
        lVar13 = FUN_04127458(param_1);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        if (*(long *)(lVar13 + 0x4b0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_030bbd24(*(long *)(lVar13 + 0x4b0),uVar6,*(undefined8 *)puVar2);
      } while( true );
    }
    goto LAB_04129030;
  }
  goto LAB_04128f90;
  while( true ) {
    lVar13 = param_1[9];
    FUN_0316897c(&local_88,param_1[8],param_2 + iVar7,*(undefined8 *)puVar3);
    uStack_68 = uStack_80;
    local_70 = local_88;
    local_60 = local_78;
    uVar5 = FUN_041bf288(&local_70,0);
    if (lVar13 == 0) goto LAB_04129030;
    FUN_02ed9128(lVar13,uVar5,*(undefined8 *)puVar2);
    iVar7 = iVar7 + 1;
    if (iVar15 == iVar7) break;
LAB_04129050:
    if (param_1[8] == 0) goto LAB_04129030;
  }
LAB_041290a8:
  if (param_1[8] != 0) {
    FUN_0316a924(param_1[8],param_2,iVar15,*(undefined8 *)PTR_DAT_0458a418);
    lVar13 = FUN_04127458(param_1);
    if (lVar13 != 0) {
      FUN_04134290(lVar13,0);
      return;
    }
  }
  goto LAB_04129030;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar14 = piVar14 + 4;
    if (uVar9 == 0) break;
LAB_04128f4c:
    if (*(long *)(piVar14 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar12 = (undefined8 *)(lVar13 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_04128f80;
    }
  }
LAB_04128f64:
  puVar12 = (undefined8 *)
            FUN_01ecb238(plVar11,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                         ,0);
LAB_04128f80:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
LAB_04128f90:
  lVar13 = FUN_04127458(param_1);
  if ((lVar13 != 0) && (*(long *)(lVar13 + 0x4b0) != 0)) {
    FUN_030bbd24(*(long *)(lVar13 + 0x4b0),uVar5,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<int>_Dispose__);
    uVar5 = (**(code **)(*param_1 + 0x1f8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x200));
    iVar7 = FUN_0412a33c(param_1,uVar5);
    lVar13 = param_1[8];
    if (lVar13 != 0) {
      iVar15 = 0;
      param_2 = param_2 + 1;
      do {
        iVar1 = param_2 + iVar15;
        if (*(int *)(lVar13 + 0x18) <= iVar1) {
LAB_04129034:
          puVar3 = PTR_DAT_0458a3f0;
          puVar2 = Method_System_Linq_Enumerable_Where<Member>__;
          if (iVar1 <= param_2) goto LAB_041290a8;
          iVar7 = 0;
          goto LAB_04129050;
        }
        uVar5 = (**(code **)(*param_1 + 0x1f8))(param_1,iVar1,*(undefined8 *)(*param_1 + 0x200));
        iVar8 = FUN_0412a33c(param_1,uVar5);
        if (iVar8 <= iVar7) goto LAB_04129034;
        lVar13 = param_1[8];
        iVar15 = iVar15 + 1;
      } while (lVar13 != 0);
    }
  }
LAB_04129030:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


