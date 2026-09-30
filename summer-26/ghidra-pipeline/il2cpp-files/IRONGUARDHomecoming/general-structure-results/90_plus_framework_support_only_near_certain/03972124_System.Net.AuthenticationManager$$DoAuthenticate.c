/*
FUNCTION_NAME: System.Net.AuthenticationManager$$DoAuthenticate
ENTRY_POINT: 03972124
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0397239c) */
/* WARNING: Removing unreachable block (ram,0x03972360) */

undefined1  [16] System_Net_AuthenticationManager__DoAuthenticate(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if ((DAT_0483849c & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
    thunk_FUN_01efb3a4(StringLiteral_4461);
    thunk_FUN_01efb3a4(StringLiteral_4462);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    DAT_0483849c = 1;
  }
  if (param_1 != (long *)0x0) {
    lVar10 = *param_1;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)StringLiteral_4461) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_039721d4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(param_1,*(long *)StringLiteral_4461,0);
LAB_039721d4:
    puVar4 = StringLiteral_4462;
    puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
    puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
    plVar7 = (long *)(*(code *)*puVar6)(param_1,puVar6[1]);
    bVar5 = false;
    auVar14 = ZEXT816(0);
    do {
      uVar8 = auVar14._8_8_;
      auVar15._0_8_ = auVar14._0_8_;
      fVar13 = auVar14._0_4_;
      do {
        bVar1 = bVar5;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_03972268;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar3,0);
LAB_03972268:
        uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        if ((uVar11 & 1) == 0) {
          if (plVar7 == (long *)0x0) goto LAB_03972354;
          lVar10 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar11 == 0) goto LAB_0397232c;
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03972314;
        }
        lVar10 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *(long *)puVar4) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_039722c4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar4,0);
LAB_039722c4:
        auVar14 = (*(code *)*puVar6)(plVar7,puVar6[1]);
        bVar5 = true;
      } while (((auVar14._0_4_ <= fVar13) && ((ulong)ABS((double)fVar13) < 0x7ff0000000000001)) &&
              (bVar1));
    } while( true );
  }
  thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_BoundsIntField_<_ctor>b__10_1__);
  uVar8 = FUN_03971094();
  goto LAB_039723a8;
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03972314:
    if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
      puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03972348;
    }
  }
LAB_0397232c:
  puVar6 = (undefined8 *)FUN_01ecb238(plVar7,*(long *)puVar2,0);
LAB_03972348:
  (*(code *)*puVar6)(plVar7,puVar6[1]);
LAB_03972354:
  if (bVar1) {
    auVar15._8_8_ = uVar8;
    return auVar15;
  }
  uVar8 = FUN_03971224();
LAB_039723a8:
  uVar9 = thunk_FUN_01efb3a4(StringLiteral_4467);
                    /* WARNING: Subroutine does not return */
  FUN_01f08910(uVar8,uVar9);
}


