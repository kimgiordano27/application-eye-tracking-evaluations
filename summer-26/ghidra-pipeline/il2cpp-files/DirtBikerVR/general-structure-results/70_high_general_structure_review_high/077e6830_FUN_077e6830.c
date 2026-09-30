/*
FUNCTION_NAME: FUN_077e6830
ENTRY_POINT: 077e6830
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4
*/


void FUN_077e6830(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_38;
  
  if ((DAT_08987229 & 1) == 0) {
    FUN_03a8a718(
                System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_TypeInfo
                );
    FUN_03a8a718(PTR_DAT_08488b88);
    FUN_03a8a718(PTR_DAT_084b7730);
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_List<uint>>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_ComputedTransitionProperty[]>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_OVRGLTFAnimatinonNode[]>_TypeInfo);
    FUN_03a8a718(System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo);
    DAT_08987229 = 1;
  }
  puVar1 = PTR_DAT_08488b88;
  lVar10 = *(long *)(param_1 + 10);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    iVar2 = FUN_05fa01f8(*(long *)(param_1 + 8),*(undefined8 *)PTR_DAT_084b7730);
    if (iVar2 < 1) goto LAB_077e6a38;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar8 = *(long **)(lVar10 + 0x18);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_077e696c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_03ac43c4(plVar8,*(long *)
                                  System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo
                          ,0);
LAB_077e696c:
    uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
    if ((uVar6 & 1) != 0) {
      lVar10 = *(long *)(lVar10 + 0x18);
      if (lVar10 != 0) {
        uVar9 = thunk_FUN_03af1434(
                                  System_Collections_Generic_Dictionary<int,_List<PostProcessVolume>>_TypeInfo
                                  );
        uVar9 = FUN_0351a5ac(7,uVar9,lVar10);
        uVar4 = thunk_FUN_03af1434(
                                  System_Collections_Generic_Dictionary<int,_AnimatorControllerParameter>_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_03a8a884(uVar9,uVar4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    plVar8 = *(long **)(lVar10 + 0x10);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar10 = *plVar8;
    uVar9 = *(undefined8 *)(param_1 + 8);
    uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)System_Collections_Generic_Dictionary<int,_List<uint>>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar10 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_077e69e0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_03ac43c4(plVar8,*(long *)
                                  System_Collections_Generic_Dictionary<int,_List<uint>>_TypeInfo,3)
    ;
LAB_077e69e0:
    lVar10 = (*(code *)*puVar3)(plVar8,uVar9,0,puVar3[1]);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    local_38 = FUN_058b71ec(lVar10,*(undefined8 *)
                                    System_Collections_Generic_Dictionary<int,_RTHandle[]>_TypeInfo)
    ;
    uVar6 = FUN_0587c6c4(&local_38,
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<int,_OVRGLTFAnimatinonNode[]>_TypeInfo
                        );
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_03afed3c(param_1 + 0xc,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03ae8be4();
      }
      FUN_043e26b4(param_1 + 2,&local_38,param_1,
                   *(undefined8 *)
                    System_Collections_Generic_Dictionary<int,_ValueTuple<Vector4,_Vector2Int>>_TypeInfo
                  );
      return;
    }
  }
  FUN_0587c704(&local_38,
               *(undefined8 *)
                System_Collections_Generic_Dictionary<int,_ComputedTransitionProperty[]>_TypeInfo);
LAB_077e6a38:
  lVar10 = *(long *)puVar1;
  *param_1 = -2;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(param_1 + 2,0);
  return;
}


