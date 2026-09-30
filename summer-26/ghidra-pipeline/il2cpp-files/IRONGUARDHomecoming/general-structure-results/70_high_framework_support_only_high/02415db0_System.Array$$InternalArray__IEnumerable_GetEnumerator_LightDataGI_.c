/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<LightDataGI>
ENTRY_POINT: 02415db0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02415f4c) */
/* WARNING: Removing unreachable block (ram,0x02415fb4) */

undefined8 System_Array__InternalArray__IEnumerable_GetEnumerator<LightDataGI>(void)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  long *unaff_x19;
  undefined8 unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int unaff_w26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
code_r0x02415db0:
                    /* try { // try from 02415db0 to 02515e47 has its CatchHandler @ 02415a90 */
  puVar2 = (undefined8 *)FUN_01ecb238();
  do {
    uVar3 = (*(code *)*puVar2)();
    if ((uVar3 & 1) == 0) {
      if (unaff_x19 == (long *)0x0) goto LAB_02415f40;
      lVar6 = *unaff_x19;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 == 0) goto System_Array__InternalArray__IEnumerable_GetEnumerator<LinkInfo>;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x38) + 0x10);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_01ecaf44(lVar6);
    }
    lVar7 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02415e40;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02415e40:
                    /* try { // try from 02415e48 to 02515e4b has its CatchHandler @ 02415e54 */
    plVar4 = (long *)(*(code *)*puVar2)();
                    /* try { // try from 02415e4c to 02515e77 has its CatchHandler @ 02415a90 */
    if (plVar4 != (long *)0x0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02415e48 with catch @ 02415e54
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02415c98 with catch @ 02415e58
                        */
      uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02415cd8 with catch @ 02415e5c
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 02415d4c with catch @ 02415e60
                        */
      uVar3 = FUN_0340eec4(uVar5,0);
      if ((uVar3 & 1) == 0) {
        iVar1 = 1;
        if (unaff_w26 != 0) {
          if (unaff_w26 == 1) {
            unaff_x21 = (long *)thunk_FUN_01f117cc(*unaff_x28);
            FUN_03416d98(unaff_x21,0);
            if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01f08a3c();
            }
            FUN_03418748(unaff_x21,unaff_x20,0);
          }
          if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01f08a3c();
          }
          FUN_03418748(unaff_x21);
          FUN_03418748(unaff_x21,uVar5,0);
          uVar5 = unaff_x20;
          iVar1 = unaff_w26 + 1;
        }
        unaff_w26 = iVar1;
        unaff_x20 = uVar5;
        if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
      }
    }
    lVar6 = *unaff_x19;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 == 0) goto code_r0x02415db0;
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    while (*(long *)(piVar8 + -2) != *unaff_x27) {
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 4;
      if (uVar3 == 0) goto code_r0x02415db0;
    }
    puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar8 = piVar8 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar8 + -2) ==
        *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
      puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_02415f34;
    }
  }
System_Array__InternalArray__IEnumerable_GetEnumerator<LinkInfo>:
  puVar2 = (undefined8 *)FUN_01ecb238();
LAB_02415f34:
  (*(code *)*puVar2)();
LAB_02415f40:
  if (unaff_w26 == 0) {
    unaff_x20 = 0;
  }
  else if (unaff_w26 != 1) {
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
                    /* WARNING: Could not recover jumptable at 0x02415f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*unaff_x21 + 0x168))(unaff_x21,*(undefined8 *)(*unaff_x21 + 0x170));
    return uVar5;
  }
  return unaff_x20;
}


