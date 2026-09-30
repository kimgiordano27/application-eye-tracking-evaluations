/*
FUNCTION_NAME: FUN_054d8244
ENTRY_POINT: 054d8244
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_1
*/


void FUN_054d8244(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  
                    /* try { // try from 054d824c to 055d827b has its CatchHandler @ 054d82c0 */
  if ((DAT_06b7ebe6 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_0676bc60);
    FUN_02d6084c(System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo);
    DAT_06b7ebe6 = 1;
  }
  puVar3 = System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo;
  puVar2 = PTR_DAT_0676bc60;
  if (param_2 == (long *)0x0) {
LAB_054d8490:
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  lVar8 = *param_2;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) ==
          *(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo) {
        puVar5 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
        goto LAB_054d82e8;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)
           FUN_02d9a5d4(param_2,*(long *)System_Action<VFXEventAttribute,_int,_Vector4>_TypeInfo,0);
LAB_054d82e8:
  uVar6 = (*(code *)*puVar5)(param_2,puVar5[1]);
  lVar8 = *(long *)puVar2;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(lVar8);
  }
  uVar7 = FUN_054cd670();
  puVar1 = PTR_DAT_0675e258;
  if (*(int *)(*(long *)(PTR_DAT_0675e258 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_02dbd7b4(*(long *)(PTR_DAT_0675e258 + 0xe0));
  }
  uVar4 = FUN_0501ed54(uVar6,uVar7,0);
  if ((uVar4 & 1) != 0) {
    lVar9 = *param_2;
    lVar8 = *(long *)puVar3;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar8) {
          puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_054d8398;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar5 = (undefined8 *)FUN_02d9a5d4(param_2,lVar8,1);
LAB_054d8398:
    lVar8 = (*(code *)*puVar5)(param_2,puVar5[1]);
    if (lVar8 == 0) goto LAB_054d8490;
    uVar6 = thunk_FUN_02d709fc(lVar8,0);
    lVar8 = *(long *)puVar2;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(lVar8);
    }
    uVar7 = FUN_054cd670();
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02dbd7b4(*(long *)(puVar1 + 0xe0));
    }
    uVar10 = FUN_0501ed54(uVar6,uVar7,0);
    if ((uVar10 & 1) != 0) goto LAB_054d8474;
  }
  uVar10 = FUN_054d8d5c(param_1,uVar6,param_2,~uVar4 & 1);
  if ((uVar10 & 1) != 0) {
    return;
  }
  lVar9 = *param_2;
  lVar8 = *(long *)puVar3;
  uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar10 != 0) {
    piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar11 + -2) == lVar8) {
        puVar5 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xf) * 0x10 + 0x138);
        goto LAB_054d8464;
      }
      uVar10 = uVar10 - 1;
      piVar11 = piVar11 + 4;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined8 *)FUN_02d9a5d4(param_2,lVar8,0xf);
LAB_054d8464:
  uVar10 = (*(code *)*puVar5)(param_2,puVar5[1]);
  if ((uVar10 & 1) == 0) {
    uVar7 = thunk_FUN_02dc61f4(PTR_DAT_0675e2d0);
    uVar7 = FUN_02d60934(uVar7,1);
    uVar6 = FUN_054c2224(uVar6);
    FUN_028f4e40(uVar7);
    FUN_028f7030(uVar7,uVar6);
    FUN_028f7064(uVar7,0,uVar6);
    uVar6 = thunk_FUN_02dc61f4(
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<PackageInitializationInfo>>_TypeInfo
                              );
    uVar6 = FUN_054f97f0(uVar6,uVar7,0);
    thunk_FUN_02dc61f4(UnityEngine_Networking_UnityWebRequestAsyncOperation_var);
    uVar7 = thunk_FUN_02d9d534();
    FUN_05678430(uVar7,uVar6,0);
    uVar6 = FUN_054f9058(uVar7,0);
    uVar7 = thunk_FUN_02dc61f4(
                              System_Runtime_CompilerServices_AsyncTaskMethodBuilder<List<RobotType>>_TypeInfo
                              );
                    /* WARNING: Subroutine does not return */
    FUN_02d609b4(uVar6,uVar7);
  }
LAB_054d8474:
  *(undefined4 *)(param_1 + 0x34) = 2;
  return;
}


