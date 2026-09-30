/*
FUNCTION_NAME: FUN_03a7261c
ENTRY_POINT: 03a7261c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 117
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x03a72a00) */
/* WARNING: Removing unreachable block (ram,0x03a72964) */
/* WARNING: Removing unreachable block (ram,0x03a72a10) */

long FUN_03a7261c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  char local_54 [4];
  
                    /* try { // try from 03a72628 to 03b726df has its CatchHandler @ 03a72478 */
  if ((DAT_04838dbc & 1) == 0) {
    thunk_FUN_01efb3a4(StringLiteral_7845);
    thunk_FUN_01efb3a4(StringLiteral_7853);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_04838dbc = 1;
  }
  puVar1 = StringLiteral_7845;
  if (param_1 == 0) {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingVideoStats>_get_Data__);
    uVar12 = thunk_FUN_01f117cc();
    uVar14 = thunk_FUN_01efb3a4(StringLiteral_7849);
    FUN_034efd20(uVar12,uVar14,0);
    uVar14 = thunk_FUN_01efb3a4(StringLiteral_7854);
                    /* WARNING: Subroutine does not return */
    FUN_01f08910(uVar12,uVar14);
  }
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)StringLiteral_7845 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03a71d98();
    uVar12 = **(undefined8 **)(*(long *)puVar1 + 0xb8);
    local_54[0] = '\0';
    FUN_035ce230(uVar12,local_54,0);
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
      lVar4 = *(long *)puVar1;
    }
    plVar5 = (long *)**(long **)(lVar4 + 0xb8);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(*plVar5 + 0x390));
    puVar3 = StringLiteral_7853;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    do {
      lVar8 = *plVar5;
      lVar4 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03a72760;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar4,0);
LAB_03a72760:
      uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar10 & 1) == 0) {
        lVar4 = 0;
        iVar13 = 9;
        goto LAB_03a728ec;
      }
      lVar8 = *plVar5;
      lVar4 = *(long *)puVar2;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar4) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_03a727c0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar4,1);
LAB_03a727c0:
      lVar4 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar14 = *(undefined8 *)puVar3;
      plVar7 = (long *)thunk_FUN_01f116d0(lVar4,uVar14);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(lVar4,uVar14);
      }
      lVar4 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_03a7283c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,1);
LAB_03a7283c:
      lVar4 = (*(code *)*puVar6)(plVar7,param_1,param_2,puVar6[1]);
    } while (lVar4 == 0);
    lVar8 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_03a728c4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,2);
LAB_03a728c4:
    uVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    *(undefined8 *)(lVar4 + 0x20) = uVar14;
    thunk_FUN_01f51358();
    iVar13 = 8;
LAB_03a728ec:
    plVar5 = (long *)thunk_FUN_01f116d0(plVar5,*(undefined8 *)puVar1);
    if (plVar5 != (long *)0x0) {
      lVar9 = *plVar5;
      lVar8 = *(long *)puVar1;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_03a7294c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar5,lVar8,0);
LAB_03a7294c:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
    if (local_54[0] != '\0') {
      Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_HingeJoint_op_Implicit(uVar12,0);
    }
    if (iVar13 != 8) {
      lVar4 = 0;
    }
  }
  return lVar4;
}


