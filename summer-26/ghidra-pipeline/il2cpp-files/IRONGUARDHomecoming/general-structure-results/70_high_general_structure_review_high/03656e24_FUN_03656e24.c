/*
FUNCTION_NAME: FUN_03656e24
ENTRY_POINT: 03656e24
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 88
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03656e24(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar6 = Method_Gameplay_Turrets_LaserTurret_<>c_<Start>b__26_1__;
  puVar5 = 
  Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
  ;
  puVar4 = 
  Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
  ;
  if ((DAT_04833c69 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Gameplay_Turrets_LaserTurret_<>c_<Start>b__26_1__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                      );
    DAT_04833c69 = 1;
  }
  **(undefined8 **)(*(long *)puVar6 + 0xb8) = 0;
  thunk_FUN_01f51358(*(undefined8 *)(*(long *)puVar6 + 0xb8),0);
  uVar3 = _UNK_00c91a28;
  uVar2 = _DAT_00c91a20;
  lVar8 = *(long *)puVar6;
  lVar9 = *(long *)(lVar8 + 0xb8);
  *(undefined1 *)(lVar9 + 8) = 1;
  *(undefined8 *)(lVar9 + 0x14) = uVar3;
  *(undefined8 *)(lVar9 + 0xc) = uVar2;
  *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x1c) = 0x3dcccccd;
  lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar4);
  FUN_0317f814(lVar8,*(undefined8 *)puVar5);
  puVar4 = 
  Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__;
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar10 = *(long *)
              Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
    ;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + 0x20) = 0xbf000000bf000000;
        *(undefined4 *)(lVar9 + 0x28) = 0xbf000000;
      }
      else {
        FUN_031800a8(0xbf000000,0xbf000000,0xbf000000,lVar8,
                     *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
      }
      lVar9 = *(long *)(lVar8 + 0x10);
      lVar10 = *(long *)puVar4;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      uVar2 = DAT_00c8dd98;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + 0x20) = uVar2;
          *(undefined4 *)(lVar9 + 0x28) = 0xbf000000;
        }
        else {
          FUN_031800a8(0x3f000000,0xbf000000,0xbf000000,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = *(long *)(lVar8 + 0x10);
        lVar10 = *(long *)puVar4;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        uVar2 = DAT_00c8ed60;
        if (lVar9 != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar9 + 0x20) = uVar2;
            *(undefined4 *)(lVar9 + 0x28) = 0xbf000000;
          }
          else {
            FUN_031800a8(0xbf000000,0x3f000000,0xbf000000,lVar8,
                         *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
          }
          lVar9 = *(long *)(lVar8 + 0x10);
          lVar10 = *(long *)puVar4;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + 0x20) = 0xbf000000bf000000;
              *(undefined4 *)(lVar9 + 0x28) = 0x3f000000;
            }
            else {
              FUN_031800a8(0xbf000000,0xbf000000,0x3f000000,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            lVar9 = *(long *)(lVar8 + 0x10);
            lVar10 = *(long *)puVar4;
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 != 0) {
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar9 + 0x20) = 0x3f0000003f000000;
                *(undefined4 *)(lVar9 + 0x28) = 0xbf000000;
              }
              else {
                FUN_031800a8(0x3f000000,0x3f000000,0xbf000000,lVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
              }
              lVar9 = *(long *)(lVar8 + 0x10);
              lVar10 = *(long *)puVar4;
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              uVar2 = DAT_00c8dd98;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar8 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar9 + 0x20) = uVar2;
                  *(undefined4 *)(lVar9 + 0x28) = 0x3f000000;
                }
                else {
                  FUN_031800a8(0x3f000000,0xbf000000,0x3f000000,lVar8,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                lVar9 = *(long *)(lVar8 + 0x10);
                lVar10 = *(long *)puVar4;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                uVar2 = DAT_00c8ed60;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar9 + 0x20) = uVar2;
                    *(undefined4 *)(lVar9 + 0x28) = 0x3f000000;
                  }
                  else {
                    FUN_031800a8(0xbf000000,0x3f000000,0x3f000000,lVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar9 = *(long *)(lVar8 + 0x10);
                  lVar10 = *(long *)puVar4;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  puVar5 = Method_Unity_Collections_NativeArray<BoneWeight>__ctor__;
                  puVar4 = Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__;
                  if (lVar9 != 0) {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                      lVar9 = lVar9 + (long)(int)uVar1 * 0xc;
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar9 + 0x20) = 0x3f0000003f000000;
                      *(undefined4 *)(lVar9 + 0x28) = 0x3f000000;
                    }
                    else {
                      FUN_031800a8(0x3f000000,0x3f000000,0x3f000000,lVar8,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                    }
                    plVar7 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x20);
                    *plVar7 = lVar8;
                    thunk_FUN_01f51358(plVar7,lVar8);
                    lVar8 = thunk_FUN_01f117cc(*(undefined8 *)puVar5);
                    FUN_030ba0b0(lVar8,*(undefined8 *)puVar4);
                    puVar4 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
                    if (lVar8 != 0) {
                      lVar9 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
                      piVar12 = (int *)(lVar8 + 0x1c);
                      *piVar12 = *piVar12 + 1;
                      lVar10 = *(long *)(lVar8 + 0x10);
                      puVar11 = (uint *)(lVar8 + 0x18);
                      uVar1 = *puVar11;
                      if (lVar10 != 0) {
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,0,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 1;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,1,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 1;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,1,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 5;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,5,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,3,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 5;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,5,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,0,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,3,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 0;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,0,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,2,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 1;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,1,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,4,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 3;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,3,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,6,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 5;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,5,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,7,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,2,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,4,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 4;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,4,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,7,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 7;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,7,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,6,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 6;
                          *piVar12 = *piVar12 + 1;
                        }
                        else {
                          FUN_030ba904(lVar8,6,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          lVar10 = *(long *)(lVar8 + 0x10);
                          lVar9 = *(long *)puVar4;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar10 == 0) goto LAB_03657c3c;
                        }
                        uVar1 = *puVar11;
                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                          *puVar11 = uVar1 + 1;
                          *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = 2;
                        }
                        else {
                          FUN_030ba904(lVar8,2,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        plVar7 = (long *)(*(long *)(*(long *)puVar6 + 0xb8) + 0x28);
                        *plVar7 = lVar8;
                        thunk_FUN_01f51358(plVar7,lVar8);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03657c3c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


