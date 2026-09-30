/*
FUNCTION_NAME: FUN_03ce79d0
ENTRY_POINT: 03ce79d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ce8428) */

long FUN_03ce79d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong local_38;
  
  if ((DAT_0453c11d & 1) == 0) {
    FUN_01c5d288(PTR_DAT_0422f988);
    FUN_01c5d288(System_Collections_Generic_Dictionary<IOperationCacheKey,_IAsyncOperation>_TypeInfo
                );
    FUN_01c5d288(PTR_DAT_042375f8);
    FUN_01c5d288(StringLiteral_6905);
    FUN_01c5d288(StringLiteral_6906);
    FUN_01c5d288(StringLiteral_6907);
    FUN_01c5d288(System_Linq_Expressions_InvocationExpression2_TypeInfo);
    FUN_01c5d288(StringLiteral_6908);
    FUN_01c5d288(StringLiteral_6909);
    FUN_01c5d288(Method_System_Net_WebCompletionSource<object>__ctor__);
                    /* try { // try from 03ce7a6c to 03de7a6f has its CatchHandler @ 03ce7bb0 */
    FUN_01c5d288(System_Collections_Generic_Dictionary<IResourceLocation,_List<object>>_TypeInfo);
                    /* try { // try from 03ce7a7c to 03de7a8b has its CatchHandler @ 03ce7bc8 */
    FUN_01c5d288(PTR_DAT_0422f958);
    FUN_01c5d288(PTR_DAT_0422fa08);
    FUN_01c5d288(PTR_DAT_042303d0);
    FUN_01c5d288(PTR_DAT_042304a8);
                    /* try { // try from 03ce7aa4 to 03de7ab3 has its CatchHandler @ 03ce7bc0 */
    FUN_01c5d288(PTR_DAT_0422fce8);
    FUN_01c5d288(PTR_DAT_042305d0);
    FUN_01c5d288(PTR_DAT_0422fd80);
                    /* try { // try from 03ce7ad0 to 03de7afb has its CatchHandler @ 03ce7bd0 */
    FUN_01c5d288(PTR_DAT_04230478);
    FUN_01c5d288(PTR_DAT_04230588);
    FUN_01c5d288(PTR_DAT_042304e0);
    FUN_01c5d288(StringLiteral_6866);
    FUN_01c5d288(StringLiteral_6895);
    FUN_01c5d288(StringLiteral_6861);
                    /* try { // try from 03ce7b14 to 03de7b1b has its CatchHandler @ 03ce7bcc */
    FUN_01c5d288(StringLiteral_6896);
    FUN_01c5d288(StringLiteral_6869);
    FUN_01c5d288(StringLiteral_6832);
                    /* try { // try from 03ce7b34 to 03de7b53 has its CatchHandler @ 03ce7bb4 */
    FUN_01c5d288(StringLiteral_6897);
    FUN_01c5d288(Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__);
    FUN_01c5d288(OVRPlugin_Vector4f___TypeInfo);
    FUN_01c5d288(StringLiteral_6863);
                    /* try { // try from 03ce7b6c to 03de7b77 has its CatchHandler @ 03ce7bcc */
    FUN_01c5d288(StringLiteral_6833);
                    /* try { // try from 03ce7b78 to 03de7ba3 has its CatchHandler @ 03ce794c */
    FUN_01c5d288(StringLiteral_6898);
    FUN_01c5d288(StringLiteral_6871);
    FUN_01c5d288(StringLiteral_6899);
    FUN_01c5d288(StringLiteral_6865);
                    /* try { // try from 03ce7ba4 to 03de7ba7 has its CatchHandler @ 03ce7bc4 */
                    /* try { // try from 03ce7ba8 to 03de7bab has its CatchHandler @ 03ce7bbc */
    FUN_01c5d288(StringLiteral_6873);
                    /* try { // try from 03ce7bac to 03de7baf has its CatchHandler @ 03ce7bb8 */
                    /* catch() { ... } // from try @ 03ce7a6c with catch @ 03ce7bb0
                       try { // try from 03ce7bb0 to 03de7be7 has its CatchHandler @ 03ce794c */
                    /* catch() { ... } // from try @ 03ce7b34 with catch @ 03ce7bb4 */
    FUN_01c5d288(StringLiteral_6900);
                    /* catch() { ... } // from try @ 03ce7bac with catch @ 03ce7bb8 */
                    /* catch() { ... } // from try @ 03ce7ba8 with catch @ 03ce7bbc */
                    /* catch() { ... } // from try @ 03ce7aa4 with catch @ 03ce7bc0 */
    FUN_01c5d288(StringLiteral_6867);
                    /* catch() { ... } // from try @ 03ce7ba4 with catch @ 03ce7bc4 */
                    /* catch() { ... } // from try @ 03ce7a7c with catch @ 03ce7bc8 */
                    /* catch() { ... } // from try @ 03ce7b14 with catch @ 03ce7bcc
                       catch() { ... } // from try @ 03ce7b6c with catch @ 03ce7bcc */
    FUN_01c5d288(StringLiteral_6901);
                    /* catch() { ... } // from try @ 03ce7ad0 with catch @ 03ce7bd0 */
    FUN_01c5d288(StringLiteral_6902);
    FUN_01c5d288(StringLiteral_6903);
                    /* try { // try from 03ce7be8 to 03de7beb has its CatchHandler @ 03ce7c0c */
                    /* try { // try from 03ce7bec to 03de7c0f has its CatchHandler @ 03ce794c */
    FUN_01c5d288(StringLiteral_6910);
    DAT_0453c11d = 1;
  }
  puVar1 = PTR_DAT_0422f958;
  if (param_1 != 0) {
    lVar14 = *(long *)PTR_DAT_0422f958;
                    /* catch() { ... } // from try @ 03ce7be8 with catch @ 03ce7c0c */
    lVar12 = *(long *)(lVar14 + 0x38);
                    /* try { // try from 03ce7c10 to 03de7c1b has its CatchHandler @ 03ce7c30 */
    if (lVar12 == 0) {
      FUN_01c723f0(lVar14);
                    /* try { // try from 03ce7c1c to 03de7c27 has its CatchHandler @ 03ce794c */
      lVar12 = *(long *)(lVar14 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
                    /* try { // try from 03ce7c28 to 03de7c2f has its CatchHandler @ 03ce7c30 */
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01c72394();
    }
                    /* catch() { ... } // from try @ 03ce7c10 with catch @ 03ce7c30
                       catch() { ... } // from try @ 03ce7c28 with catch @ 03ce7c30 */
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    puVar4 = StringLiteral_6832;
    puVar3 = System_Collections_Generic_Dictionary<IOperationCacheKey,_IAsyncOperation>_TypeInfo;
    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01c72394();
    }
    puVar2 = PTR_DAT_0422fce8;
    plVar8 = (long *)FUN_021fad1c(param_1,*(undefined8 *)puVar4,**(undefined8 **)(lVar12 + 0xb8),
                                  *(undefined8 *)puVar3);
    lVar14 = *(long *)puVar1;
    lVar12 = *(long *)(lVar14 + 0x38);
    if (lVar12 == 0) {
      FUN_01c723f0(lVar14);
      lVar12 = *(long *)(lVar14 + 0x38);
    }
    lVar12 = *(long *)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01c72394();
    }
    if (*(int *)(lVar12 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_01c72394();
    }
    puVar3 = System_Collections_Generic_Dictionary<IResourceLocation,_List<object>>_TypeInfo;
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    uVar9 = FUN_021fad1c(plVar8,*(undefined8 *)StringLiteral_6833,**(undefined8 **)(lVar12 + 0xb8),
                         *(undefined8 *)
                          System_Collections_Generic_Dictionary<IResourceLocation,_List<object>>_TypeInfo
                        );
    uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6903,uVar9,0);
    if ((uVar10 & 1) == 0) {
      uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6896,uVar9,0);
      if ((uVar10 & 1) == 0) {
        uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6897,uVar9,0);
        if ((uVar10 & 1) == 0) {
          uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6899,uVar9,0);
          if ((uVar10 & 1) == 0) {
            uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6900,uVar9,0);
            if ((uVar10 & 1) != 0) {
              lVar14 = *(long *)puVar1;
              lVar12 = *(long *)(lVar14 + 0x38);
              if (lVar12 == 0) {
                FUN_01c723f0(lVar14);
                lVar12 = *(long *)(lVar14 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_01c72394();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_01c72394();
              }
              lVar12 = FUN_04021a68(*(undefined8 *)(lVar12 + 0xb8));
              return lVar12;
            }
            uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6895,uVar9,0);
            if ((uVar10 & 1) == 0) {
              uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6902,uVar9,0);
              if ((uVar10 & 1) == 0) {
                uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6901,uVar9,0);
                if ((uVar10 & 1) == 0) {
                  uVar10 = thunk_FUN_03152714(*(undefined8 *)StringLiteral_6898,uVar9,0);
                  if ((uVar10 & 1) == 0) {
                    uVar10 = thunk_FUN_03152714(*(undefined8 *)
                                                 Method_UnityEngine_Rendering_VolumeParameter<Vector4>_op_Inequality__
                                                ,uVar9,0);
                    if ((uVar10 & 1) == 0) {
                      lVar14 = *(long *)puVar1;
                      lVar12 = *(long *)(lVar14 + 0x38);
                      if (lVar12 == 0) {
                        FUN_01c723f0(lVar14);
                        lVar12 = *(long *)(lVar14 + 0x38);
                      }
                      lVar12 = *(long *)(lVar12 + 0x10);
                      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                        lVar12 = FUN_01c72394();
                      }
                      if (*(int *)(lVar12 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                        lVar12 = FUN_01c72394();
                      }
                      uVar10 = FUN_021fab3c(plVar8,*(undefined8 *)StringLiteral_6910,
                                            **(undefined8 **)(lVar12 + 0xb8),
                                            *(undefined8 *)PTR_DAT_042375f8);
                      if ((uVar10 & 1) != 0) {
                        param_1 = FUN_03cea9bc(param_1);
                      }
                    }
                    else {
                      if (*(long *)(param_1 + 0x10) == 0) {
                        uVar9 = 0;
                      }
                      else {
                        uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
                      }
                      param_1 = thunk_FUN_01c496e0(*(undefined8 *)PTR_DAT_0422f988);
                      FUN_03ce96e4(param_1,uVar9);
                    }
                  }
                  else {
                    lVar14 = *(long *)puVar1;
                    lVar12 = *(long *)(lVar14 + 0x38);
                    if (lVar12 == 0) {
                      FUN_01c723f0(lVar14);
                      lVar12 = *(long *)(lVar14 + 0x38);
                    }
                    lVar12 = *(long *)(lVar12 + 0x10);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_01c72394();
                    }
                    if (*(int *)(lVar12 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                      lVar12 = FUN_01c72394();
                    }
                    param_1 = FUN_021fad1c(param_1,*(undefined8 *)OVRPlugin_Vector4f___TypeInfo,
                                           **(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)puVar3);
                  }
                }
                else {
                  lVar14 = *(long *)puVar1;
                  lVar12 = *(long *)(lVar14 + 0x38);
                  if (lVar12 == 0) {
                    FUN_01c723f0(lVar14);
                    lVar12 = *(long *)(lVar14 + 0x38);
                  }
                  lVar12 = *(long *)(lVar12 + 0x10);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_01c72394();
                  }
                  if (*(int *)(lVar12 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                    lVar12 = FUN_01c72394();
                  }
                  uVar6 = FUN_021fab8c(param_1,*(undefined8 *)StringLiteral_6871,
                                       **(undefined8 **)(lVar12 + 0xb8),
                                       *(undefined8 *)StringLiteral_6905);
                  local_38 = CONCAT62(local_38._2_6_,uVar6);
                  param_1 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042303d0,&local_38);
                }
              }
              else {
                lVar14 = *(long *)puVar1;
                lVar12 = *(long *)(lVar14 + 0x38);
                if (lVar12 == 0) {
                  FUN_01c723f0(lVar14);
                  lVar12 = *(long *)(lVar14 + 0x38);
                }
                lVar12 = *(long *)(lVar12 + 0x10);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_01c72394();
                }
                if (*(int *)(lVar12 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  lVar12 = FUN_01c72394();
                }
                local_38 = FUN_021fabdc(param_1,*(undefined8 *)StringLiteral_6869,
                                        **(undefined8 **)(lVar12 + 0xb8),
                                        *(undefined8 *)StringLiteral_6906);
                param_1 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304a8,&local_38);
              }
            }
            else {
              lVar14 = *(long *)puVar1;
              lVar12 = *(long *)(lVar14 + 0x38);
              if (lVar12 == 0) {
                FUN_01c723f0(lVar14);
                lVar12 = *(long *)(lVar14 + 0x38);
              }
              lVar12 = *(long *)(lVar12 + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_01c72394();
              }
              if (*(int *)(lVar12 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
              if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                lVar12 = FUN_01c72394();
              }
              uVar7 = FUN_021fadbc(param_1,*(undefined8 *)StringLiteral_6867,
                                   **(undefined8 **)(lVar12 + 0xb8),
                                   *(undefined8 *)
                                    Method_System_Net_WebCompletionSource<object>__ctor__);
              local_38 = CONCAT44(local_38._4_4_,uVar7);
              param_1 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042304e0,&local_38);
            }
          }
          else {
            lVar14 = *(long *)puVar1;
            lVar12 = *(long *)(lVar14 + 0x38);
            if (lVar12 == 0) {
              FUN_01c723f0(lVar14);
              lVar12 = *(long *)(lVar14 + 0x38);
            }
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01c72394();
            }
            if (*(int *)(lVar12 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
            if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
              lVar12 = FUN_01c72394();
            }
            uVar6 = FUN_021fac2c(param_1,*(undefined8 *)StringLiteral_6863,
                                 **(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)StringLiteral_6907)
            ;
            local_38 = CONCAT62(local_38._2_6_,uVar6);
            param_1 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_042305d0,&local_38);
          }
        }
        else {
          lVar14 = *(long *)puVar1;
          lVar12 = *(long *)(lVar14 + 0x38);
          if (lVar12 == 0) {
            FUN_01c723f0(lVar14);
            lVar12 = *(long *)(lVar14 + 0x38);
          }
          lVar12 = *(long *)(lVar12 + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01c72394();
          }
          if (*(int *)(lVar12 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
          if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
            lVar12 = FUN_01c72394();
          }
          uVar5 = FUN_021fad6c(param_1,*(undefined8 *)StringLiteral_6861,
                               **(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)StringLiteral_6909);
          local_38 = CONCAT71(local_38._1_7_,uVar5);
          param_1 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_04230588,&local_38);
        }
      }
      else {
        lVar14 = *(long *)puVar1;
        lVar12 = *(long *)(lVar14 + 0x38);
        if (lVar12 == 0) {
          FUN_01c723f0(lVar14);
          lVar12 = *(long *)(lVar14 + 0x38);
        }
        lVar12 = *(long *)(lVar12 + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01c72394();
        }
        if (*(int *)(lVar12 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          lVar12 = FUN_01c72394();
        }
        uVar5 = FUN_021fab3c(param_1,*(undefined8 *)StringLiteral_6873,
                             **(undefined8 **)(lVar12 + 0xb8),*(undefined8 *)PTR_DAT_042375f8);
        local_38 = CONCAT71(local_38._1_7_,uVar5) & 0xffffffffffffff01;
        param_1 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fa08,&local_38);
      }
    }
    else {
      lVar14 = *(long *)puVar1;
      lVar12 = *(long *)(lVar14 + 0x38);
      if (lVar12 == 0) {
        FUN_01c723f0(lVar14);
        lVar12 = *(long *)(lVar14 + 0x38);
      }
      lVar12 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01c72394();
      }
      if (*(int *)(lVar12 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      lVar12 = *(long *)(*(long *)(lVar14 + 0x38) + 0x10);
      if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_01c72394();
      }
      uVar7 = FUN_021fac7c(param_1,*(undefined8 *)StringLiteral_6865,
                           **(undefined8 **)(lVar12 + 0xb8),
                           *(undefined8 *)System_Linq_Expressions_InvocationExpression2_TypeInfo);
      local_38 = CONCAT44(local_38._4_4_,uVar7);
      param_1 = thunk_FUN_01c49334(*(undefined8 *)PTR_DAT_0422fd80,&local_38);
    }
    lVar12 = *plVar8;
    uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar10 != 0) {
      piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)puVar2) {
          puVar11 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03ce8330;
        }
        uVar10 = uVar10 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar10 != 0);
    }
    puVar11 = (undefined8 *)FUN_01c72498(plVar8,*(long *)puVar2,0);
LAB_03ce8330:
    (*(code *)*puVar11)(plVar8,puVar11[1]);
  }
  return param_1;
}


