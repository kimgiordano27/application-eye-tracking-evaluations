/*
FUNCTION_NAME: FUN_06bfaf54
ENTRY_POINT: 06bfaf54
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8 FUN_06bfaf54(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  
  if ((DAT_07a4fff8 & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075da698);
    FUN_031f20f4(PTR_DAT_075da6a0);
    FUN_031f20f4(PTR_DAT_075da668);
    FUN_031f20f4(PTR_DAT_075da670);
    FUN_031f20f4(PTR_DAT_075da6b8);
    FUN_031f20f4(PTR_DAT_075da6c0);
    FUN_031f20f4(System_Action<HTTPRequest,_HTTPResponse,_TaskCompletionSource<byte[]>>_TypeInfo);
    FUN_031f20f4(System_Action<Vector3,_Vector3>_TypeInfo);
    FUN_031f20f4(
                System_Action<HTTPRequest,_HTTPResponse,_TaskCompletionSource<AssetBundle>>_TypeInfo
                );
    FUN_031f20f4(System_Action<TapGesture,_Touch>_TypeInfo);
    DAT_07a4fff8 = 1;
  }
  uVar1 = FUN_06bfad04(param_1);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_06bfae2c(param_1), (uVar1 & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_06bfa864(param_1);
    FUN_06bfa98c(param_1);
    if (puVar2 != (undefined8 *)0x0) {
      uVar3 = FUN_07189824(*puVar2);
      return uVar3;
    }
    goto LAB_06bfb358;
  }
  uVar1 = (**(code **)(*param_1 + 600))(param_1,*(undefined8 *)(*param_1 + 0x260));
  if ((uVar1 & 1) == 0) {
    plVar6 = (long *)param_1[5];
    if (plVar6 == (long *)0x0) goto LAB_06bfb358;
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075da670) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 6) * 0x10 + 0x138);
          goto LAB_06bfb164;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075da670,6);
LAB_06bfb164:
    plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    lVar4 = param_1[6];
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075da6c0);
    FUN_06bfb35c(uVar3,lVar4);
    if (plVar6 == (long *)0x0) goto LAB_06bfb358;
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075da698) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto FUN_06bfb1f4;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075da698,2);
FUN_06bfb1f4:
    (*(code *)*puVar2)(plVar6,uVar3,puVar2[1]);
  }
  uVar1 = (**(code **)(*param_1 + 0x268))(param_1,*(undefined8 *)(*param_1 + 0x270));
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  plVar6 = (long *)param_1[7];
  if (plVar6 != (long *)0x0) {
    lVar4 = *plVar6;
    uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar1 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075da670) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 5) * 0x10 + 0x138);
          goto LAB_06bfb27c;
        }
        uVar1 = uVar1 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar1 != 0);
    }
    puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075da670,5);
LAB_06bfb27c:
    plVar6 = (long *)(*(code *)*puVar2)(plVar6,puVar2[1]);
    lVar4 = param_1[8];
    uVar3 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_075da6b8);
    FUN_06bfb3b4(uVar3,lVar4);
    if (plVar6 != (long *)0x0) {
      lVar4 = *plVar6;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_075da6a0) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
            goto LAB_06bfb30c;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*(long *)PTR_DAT_075da6a0,2);
LAB_06bfb30c:
      (*(code *)*puVar2)(plVar6,uVar3,puVar2[1]);
      return 1;
    }
  }
LAB_06bfb358:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


