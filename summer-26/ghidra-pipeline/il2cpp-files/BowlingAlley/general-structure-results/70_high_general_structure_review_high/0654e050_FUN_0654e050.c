/*
FUNCTION_NAME: FUN_0654e050
ENTRY_POINT: 0654e050
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_0654e050(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_076dfb40 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07279b90);
    thunk_FUN_032e1da0(
                      Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
                      );
    DAT_076dfb40 = 1;
  }
  puVar2 = 
  Method_Unity_XR_CoreUtils_Bindings_Variables_BindableVariableBase<AffordanceStateData>_set_Value__
  ;
  puVar1 = PTR_DAT_07279b90;
  lVar3 = *param_1;
  if (lVar3 == 0) goto LAB_0654eb28;
  plVar8 = *(long **)(lVar3 + 0x20);
  if (plVar8 != (long *)0x0) {
    lVar7 = *(long *)(lVar3 + 0x28);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07279b90);
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar3 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_0654e110;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_032937ac(plVar8,*(long *)puVar2,0);
LAB_0654e110:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar3 + 8),0);
    if (lVar7 == 0) goto LAB_0654eb28;
    FUN_064ab69c(lVar7,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
    plVar8 = *(long **)(lVar3 + 0x20);
    lVar3 = *(long *)(lVar3 + 0x28);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0654eb28;
    lVar7 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar7 = lVar7 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_0654e1a0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar7 = FUN_032937ac(plVar8,*(long *)puVar2,0);
LAB_0654e1a0:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar7 + 8),0);
    if (lVar3 == 0) goto LAB_0654eb28;
    FUN_064ab7fc(lVar3,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
    plVar8 = *(long **)(lVar3 + 0x20);
    lVar3 = *(long *)(lVar3 + 0x28);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0654eb28;
    lVar7 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar7 = lVar7 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_0654e230;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar7 = FUN_032937ac(plVar8,*(long *)puVar2,0);
LAB_0654e230:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar7 + 8),0);
    if (lVar3 == 0) goto LAB_0654eb28;
    FUN_064ab74c(lVar3,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
    lVar7 = *(long *)(lVar3 + 0x30);
    plVar8 = *(long **)(lVar3 + 0x20);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0654eb28;
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar3 = lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138;
          goto LAB_0654e2c8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_032937ac(plVar8,*(long *)puVar2,1);
LAB_0654e2c8:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar3 + 8),0);
    if (lVar7 == 0) goto LAB_0654eb28;
    FUN_064ab69c(lVar7,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
    lVar7 = *(long *)(lVar3 + 0x30);
    plVar8 = *(long **)(lVar3 + 0x20);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0654eb28;
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar3 = lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138;
          goto LAB_0654e360;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_032937ac(plVar8,*(long *)puVar2,1);
LAB_0654e360:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar3 + 8),0);
    if (lVar7 == 0) goto LAB_0654eb28;
    FUN_064ab7fc(lVar7,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
    lVar7 = *(long *)(lVar3 + 0x30);
    plVar8 = *(long **)(lVar3 + 0x20);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0654eb28;
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar3 = lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138;
          goto LAB_0654e3f8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_032937ac(plVar8,*(long *)puVar2,1);
LAB_0654e3f8:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar3 + 8),0);
    if (lVar7 == 0) goto LAB_0654eb28;
    FUN_064ab74c(lVar7,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
    lVar7 = *(long *)(lVar3 + 0x38);
    plVar8 = *(long **)(lVar3 + 0x20);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0654eb28;
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar3 = lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138;
          goto LAB_0654e490;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_032937ac(plVar8,*(long *)puVar2,2);
LAB_0654e490:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar3 + 8),0);
    if (lVar7 == 0) goto LAB_0654eb28;
    FUN_064ab69c(lVar7,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
    lVar7 = *(long *)(lVar3 + 0x38);
    plVar8 = *(long **)(lVar3 + 0x20);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0654eb28;
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar3 = lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138;
          goto LAB_0654e528;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_032937ac(plVar8,*(long *)puVar2,2);
LAB_0654e528:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar3 + 8),0);
    if (lVar7 == 0) goto LAB_0654eb28;
    FUN_064ab7fc(lVar7,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
    lVar7 = *(long *)(lVar3 + 0x38);
    plVar8 = *(long **)(lVar3 + 0x20);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    if (plVar8 == (long *)0x0) goto LAB_0654eb28;
    lVar3 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar3 = lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138;
          goto LAB_0654e5c0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_032937ac(plVar8,*(long *)puVar2,2);
LAB_0654e5c0:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,plVar8,*(undefined8 *)(lVar3 + 8),0);
    if (lVar7 == 0) goto LAB_0654eb28;
    FUN_064ab74c(lVar7,uVar4,0);
    lVar3 = *param_1;
    if (lVar3 == 0) goto LAB_0654eb28;
  }
  *(long *)(lVar3 + 0x20) = (long)param_2;
  thunk_FUN_0333a630((long *)(lVar3 + 0x20),param_2);
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    lVar7 = *(long *)(*param_1 + 0x28);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
    lVar3 = *param_2;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
          lVar3 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
          goto LAB_0654e678;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_032937ac(param_2,*(long *)puVar2,0);
LAB_0654e678:
    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
              (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
    if (lVar7 != 0) {
      FUN_064ab644(lVar7,uVar4,0);
      if (*param_1 != 0) {
        lVar7 = *(long *)(*param_1 + 0x28);
        uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
        lVar3 = *param_2;
        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
              lVar3 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
              goto LAB_0654e704;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        lVar3 = FUN_032937ac(param_2,*(long *)puVar2,0);
LAB_0654e704:
        System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                  (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
        if (lVar7 != 0) {
          FUN_064ab7a4(lVar7,uVar4,0);
          if (*param_1 != 0) {
            lVar7 = *(long *)(*param_1 + 0x28);
            uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
            lVar3 = *param_2;
            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
            if (uVar5 != 0) {
              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
              do {
                if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                  lVar3 = lVar3 + (long)*piVar6 * 0x10 + 0x138;
                  goto LAB_0654e790;
                }
                uVar5 = uVar5 - 1;
                piVar6 = piVar6 + 4;
              } while (uVar5 != 0);
            }
            lVar3 = FUN_032937ac(param_2,*(long *)puVar2,0);
LAB_0654e790:
            System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                      (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
            if (lVar7 != 0) {
              FUN_064ab6f4(lVar7,uVar4,0);
              if (*param_1 != 0) {
                lVar7 = *(long *)(*param_1 + 0x30);
                uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                lVar3 = *param_2;
                uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                if (uVar5 != 0) {
                  piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                      lVar3 = lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                      goto LAB_0654e820;
                    }
                    uVar5 = uVar5 - 1;
                    piVar6 = piVar6 + 4;
                  } while (uVar5 != 0);
                }
                lVar3 = FUN_032937ac(param_2,*(long *)puVar2,1);
LAB_0654e820:
                System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                          (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
                if (lVar7 != 0) {
                  FUN_064ab644(lVar7,uVar4,0);
                  if (*param_1 != 0) {
                    lVar7 = *(long *)(*param_1 + 0x30);
                    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                    lVar3 = *param_2;
                    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    if (uVar5 != 0) {
                      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                          lVar3 = lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                          goto LAB_0654e8b0;
                        }
                        uVar5 = uVar5 - 1;
                        piVar6 = piVar6 + 4;
                      } while (uVar5 != 0);
                    }
                    lVar3 = FUN_032937ac(param_2,*(long *)puVar2,1);
LAB_0654e8b0:
                    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                              (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
                    if (lVar7 != 0) {
                      FUN_064ab7a4(lVar7,uVar4,0);
                      if (*param_1 != 0) {
                        lVar7 = *(long *)(*param_1 + 0x30);
                        uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                        lVar3 = *param_2;
                        uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                        if (uVar5 != 0) {
                          piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                          do {
                            if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                              lVar3 = lVar3 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                              goto LAB_0654e940;
                            }
                            uVar5 = uVar5 - 1;
                            piVar6 = piVar6 + 4;
                          } while (uVar5 != 0);
                        }
                        lVar3 = FUN_032937ac(param_2,*(long *)puVar2,1);
LAB_0654e940:
                        System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                                  (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
                        if (lVar7 != 0) {
                          FUN_064ab6f4(lVar7,uVar4,0);
                          if (*param_1 != 0) {
                            lVar7 = *(long *)(*param_1 + 0x38);
                            uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                            lVar3 = *param_2;
                            uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                            if (uVar5 != 0) {
                              piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                              do {
                                if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                  lVar3 = lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138;
                                  goto LAB_0654e9d0;
                                }
                                uVar5 = uVar5 - 1;
                                piVar6 = piVar6 + 4;
                              } while (uVar5 != 0);
                            }
                            lVar3 = FUN_032937ac(param_2,*(long *)puVar2,2);
LAB_0654e9d0:
                            System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                                      (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
                            if (lVar7 != 0) {
                              FUN_064ab644(lVar7,uVar4,0);
                              if (*param_1 != 0) {
                                lVar7 = *(long *)(*param_1 + 0x38);
                                uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                lVar3 = *param_2;
                                uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                                if (uVar5 != 0) {
                                  piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                  do {
                                    if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                      lVar3 = lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138;
                                      goto LAB_0654ea60;
                                    }
                                    uVar5 = uVar5 - 1;
                                    piVar6 = piVar6 + 4;
                                  } while (uVar5 != 0);
                                }
                                lVar3 = FUN_032937ac(param_2,*(long *)puVar2,2);
LAB_0654ea60:
                                System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                                          (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
                                if (lVar7 != 0) {
                                  FUN_064ab7a4(lVar7,uVar4,0);
                                  if (*param_1 != 0) {
                                    lVar7 = *(long *)(*param_1 + 0x38);
                                    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)puVar1);
                                    lVar3 = *param_2;
                                    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
                                    if (uVar5 != 0) {
                                      piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
                                      do {
                                        if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                          lVar3 = lVar3 + (long)(*piVar6 + 2) * 0x10 + 0x138;
                                          goto LAB_0654eaf0;
                                        }
                                        uVar5 = uVar5 - 1;
                                        piVar6 = piVar6 + 4;
                                      } while (uVar5 != 0);
                                    }
                                    lVar3 = FUN_032937ac(param_2,*(long *)puVar2,2);
LAB_0654eaf0:
                                    System_Array_EmptyInternalEnumerator<Dictionary_Entry<object,_float3>>__Dispose
                                              (uVar4,param_2,*(undefined8 *)(lVar3 + 8),0);
                                    if (lVar7 != 0) {
                                      FUN_064ab6f4(lVar7,uVar4,0);
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
              }
            }
          }
        }
      }
    }
  }
LAB_0654eb28:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


