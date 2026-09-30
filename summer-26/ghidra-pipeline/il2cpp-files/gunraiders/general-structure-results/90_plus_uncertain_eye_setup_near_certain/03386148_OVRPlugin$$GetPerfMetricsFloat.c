/*
FUNCTION_NAME: OVRPlugin$$GetPerfMetricsFloat
ENTRY_POINT: 03386148
PROGRAM: gunraiders-libil2cpp.so
SCORE: 119
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__GetPerfMetricsFloat(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int *piVar11;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
  if ((param_1 & 1) == 0) {
LAB_033861b4:
    lVar6 = thunk_FUN_01c496e0(*unaff_x26);
    uVar5 = FUN_02b6841c();
  }
  else {
    lVar4 = thunk_FUN_01c496e0(*(undefined8 *)
                                Method_System_Collections_Generic_Dictionary_Enumerator<uint,_uint>_Dispose__
                              );
    FUN_0338c8b4(lVar4,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar5 = FUN_033a76dc();
    if (lVar4 == 0) goto LAB_0338650c;
    *(undefined8 *)(lVar4 + 0x10) = uVar5;
    lVar6 = thunk_FUN_01c496e0(*unaff_x26);
    uVar5 = FUN_02b6841c(lVar6,lVar4,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_get_Current__
                         ,0);
    if (lVar6 == 0) goto LAB_033861b4;
  }
  *(long *)(unaff_x19 + 0xf0) = lVar6;
  puVar2 = System_Linq_Expressions_InvocationExpressionN_TypeInfo;
  if (*(char *)(unaff_x19 + 0x2a) != '\0') {
    uVar5 = FUN_03386750(uVar5,*(undefined8 *)(unaff_x19 + 0x18));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    uVar7 = FUN_0320e6fc(uVar5,0,0);
    if ((uVar7 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0xbc) == 2) {
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar7 = FUN_033a7cb8(0);
        if ((uVar7 & 1) != 0) {
          uVar5 = thunk_FUN_01c496e0(*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_get_Current__
                                    );
          FUN_02b623a8();
          *(undefined8 *)(unaff_x19 + 0x80) = uVar5;
        }
      }
      else if ((*(long *)(unaff_x19 + 0x80) == 0) || (*(char *)(unaff_x19 + 0x88) != '\0')) {
        uVar5 = FUN_03386c3c(uVar7,*(undefined8 *)(unaff_x19 + 0x18));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar7 = FUN_0320e6fc(uVar5,0,0);
        if ((uVar7 & 1) != 0) {
          if (*(int *)(*unaff_x25 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          plVar8 = (long *)FUN_033a78fc(0);
          if (plVar8 == (long *)0x0) goto LAB_0338650c;
          uVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 400));
          *(undefined8 *)(unaff_x19 + 0x108) = uVar5;
          goto OVRPlugin__GetPerfMetricsInt;
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_0338650c;
        uVar7 = FUN_032eb44c(*(long *)(unaff_x19 + 0x18),0);
        if ((uVar7 & 1) != 0) {
          uVar5 = FUN_03386c84();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar2);
          }
          uVar7 = FUN_0320e6fc(uVar5,0,0);
          if ((uVar7 & 1) != 0) goto LAB_0338621c;
        }
      }
    }
    else {
LAB_0338621c:
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar8 = (long *)FUN_033a78fc(0);
      if (plVar8 == (long *)0x0) goto LAB_0338650c;
      uVar5 = (**(code **)(*plVar8 + 0x188))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 400));
      *(undefined8 *)(unaff_x19 + 0x100) = uVar5;
OVRPlugin__GetPerfMetricsInt:
      uVar5 = FUN_03392404();
      uVar9 = (**(code **)(*unaff_x21 + 0x1b8))();
      FUN_0230a718(uVar5,uVar9,*unaff_x24);
    }
  }
  puVar2 = Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__;
  uVar5 = FUN_03386f38();
  uVar7 = FUN_032106f8(uVar5,0,0);
  if ((uVar7 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_033870f4();
  }
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar1 = UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var;
  if (unaff_x20 == (long *)0x0) {
LAB_0338650c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar9 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  uVar5 = (**(code **)(*unaff_x20 + 0x2d8))();
  iVar3 = FUN_0247a4d4(uVar9,uVar5,*(undefined8 *)puVar1);
  puVar1 = Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_MoveNext__;
  puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_MoveNext__
  ;
  if (iVar3 != -1) {
    plVar8 = (long *)FUN_0338fba4();
    uVar5 = thunk_FUN_01c496e0(*(undefined8 *)puVar1);
    FUN_0338f5a0(uVar5,0,*(undefined8 *)puVar2,0);
    if (plVar8 == (long *)0x0) goto LAB_0338650c;
    lVar4 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar7 != 0) {
      piVar11 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
           ) {
          puVar10 = (undefined8 *)(lVar4 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_03386414;
        }
        uVar7 = uVar7 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar7 != 0);
    }
    puVar10 = (undefined8 *)
              FUN_01c72498(plVar8,*(long *)
                                   Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                           ,2);
LAB_03386414:
    (*(code *)*puVar10)(plVar8,uVar5,puVar10[1]);
  }
  return;
}


