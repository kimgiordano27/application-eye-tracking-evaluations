/*
FUNCTION_NAME: FUN_03385f50
ENTRY_POINT: 03385f50
PROGRAM: gunraiders-libil2cpp.so
SCORE: 112
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


long FUN_03385f50(long *param_1,long *param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
  ;
  if ((DAT_04533633 & 1) == 0) {
    FUN_01c5d288(UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_Dispose__
                );
    FUN_01c5d288(System_Linq_Expressions_InvocationExpressionN_TypeInfo);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_MoveNext__
                );
    FUN_01c5d288(Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_Dispose__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_get_Current__
                );
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<Type,_List<string>>_get_Current__
                );
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_Dispose__);
    FUN_01c5d288(UnityEngine_Splines_InterpolatorUtility_TypeInfo);
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_MoveNext__)
    ;
    FUN_01c5d288(PTR_DAT_0422fb28);
    FUN_01c5d288(
                Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_get_Current__
                );
    FUN_01c5d288(Method_System_Collections_Generic_Dictionary_Enumerator<uint,_uint>_Dispose__);
    DAT_04533633 = 1;
  }
  lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
  FUN_033929e4(lVar8,param_2,0);
  FUN_03386510(param_1,lVar8);
  puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_Dispose__;
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_Dispose__;
  puVar4 = UnityEngine_Splines_InterpolatorUtility_TypeInfo;
  if (lVar8 == 0) goto LAB_0338650c;
  cVar1 = *(char *)((long)param_1 + 0x26);
  uVar15 = *(undefined8 *)(lVar8 + 0x18);
  if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_Dispose__
  ;
  uVar6 = FUN_033a7280(uVar15,cVar1 != '\0',0);
  *(undefined4 *)(lVar8 + 0xbc) = uVar6;
  uVar16 = *(undefined8 *)(lVar8 + 0xd8);
  uVar15 = (**(code **)(*param_1 + 0x268))
                     (param_1,*(undefined8 *)(lVar8 + 0x18),uVar6,*(undefined8 *)(*param_1 + 0x270))
  ;
  FUN_0230a718(uVar16,uVar15,*(undefined8 *)puVar3);
  lVar9 = FUN_0236e9d4(*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)puVar2);
  if (lVar9 == 0) {
LAB_033861b4:
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    uVar15 = FUN_02b6841c(lVar9,param_1,*(undefined8 *)(*param_1 + 0x2c0),0);
  }
  else {
    *(undefined8 *)(lVar8 + 200) = *(undefined8 *)(lVar9 + 0x5c);
    *(undefined8 *)(lVar8 + 0xd0) = *(undefined8 *)(lVar9 + 100);
    puVar2 = PTR_DAT_0422fb28;
    *(undefined8 *)(lVar8 + 0xc0) = *(undefined8 *)(lVar9 + 0x54);
    uVar15 = *(undefined8 *)(lVar9 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar10 = FUN_032ea0d4(uVar15,0,0);
    if ((uVar10 & 1) == 0) goto LAB_033861b4;
    lVar11 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<uint,_uint>_Dispose__
                               );
    FUN_0338c8b4(lVar11,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar15 = FUN_033a76dc(lVar9,0);
    if (lVar11 == 0) goto LAB_0338650c;
    *(undefined8 *)(lVar11 + 0x10) = uVar15;
    lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    uVar15 = FUN_02b6841c(lVar9,lVar11,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_get_Current__
                          ,0);
    if (lVar9 == 0) goto LAB_033861b4;
  }
  *(long *)(lVar8 + 0xf0) = lVar9;
  puVar2 = System_Linq_Expressions_InvocationExpressionN_TypeInfo;
  if (*(char *)(lVar8 + 0x2a) != '\0') {
    uVar15 = FUN_03386750(uVar15,*(undefined8 *)(lVar8 + 0x18));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    uVar10 = FUN_0320e6fc(uVar15,0,0);
    if ((uVar10 & 1) == 0) {
      if (*(int *)(lVar8 + 0xbc) == 2) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar10 = FUN_033a7cb8(0);
        if ((uVar10 & 1) != 0) {
          uVar15 = thunk_FUN_01c496e0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_get_Current__
                                     );
          FUN_02b623a8(uVar15,lVar8,
                       *(undefined8 *)
                        Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_get_Current__
                       ,0);
          *(undefined8 *)(lVar8 + 0x80) = uVar15;
        }
      }
      else if ((*(long *)(lVar8 + 0x80) == 0) || (*(char *)(lVar8 + 0x88) != '\0')) {
        uVar15 = FUN_03386c3c(uVar10,*(undefined8 *)(lVar8 + 0x18));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar10 = FUN_0320e6fc(uVar15,0,0);
        if ((uVar10 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          plVar12 = (long *)FUN_033a78fc(0);
          if (plVar12 == (long *)0x0) goto LAB_0338650c;
          uVar16 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 400));
          *(undefined8 *)(lVar8 + 0x108) = uVar16;
          goto OVRPlugin__GetPerfMetricsInt;
        }
      }
      else {
        if (*(long *)(lVar8 + 0x18) == 0) goto LAB_0338650c;
        uVar10 = FUN_032eb44c(*(long *)(lVar8 + 0x18),0);
        if ((uVar10 & 1) != 0) {
          uVar15 = FUN_03386c84(param_1,*(undefined8 *)(lVar8 + 0x18),*(undefined8 *)(lVar8 + 0xd8))
          ;
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar2);
          }
          uVar10 = FUN_0320e6fc(uVar15,0,0);
          if ((uVar10 & 1) != 0) goto LAB_0338621c;
        }
      }
    }
    else {
LAB_0338621c:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar12 = (long *)FUN_033a78fc(0);
      if (plVar12 == (long *)0x0) goto LAB_0338650c;
      uVar16 = (**(code **)(*plVar12 + 0x188))(plVar12,uVar15,*(undefined8 *)(*plVar12 + 400));
      *(undefined8 *)(lVar8 + 0x100) = uVar16;
OVRPlugin__GetPerfMetricsInt:
      uVar16 = FUN_03392404(lVar8,0);
      uVar15 = (**(code **)(*param_1 + 0x1b8))
                         (param_1,uVar15,*(undefined8 *)(lVar8 + 0xd8),
                          *(undefined8 *)(*param_1 + 0x1c0));
      FUN_0230a718(uVar16,uVar15,*(undefined8 *)puVar3);
    }
  }
  puVar4 = Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__;
  uVar15 = FUN_03386f38(param_1,*(undefined8 *)(lVar8 + 0x18));
  uVar10 = FUN_032106f8(uVar15,0,0);
  if ((uVar10 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_033870f4(lVar8,uVar15);
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar3 = UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var;
  if (param_2 == (long *)0x0) {
LAB_0338650c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar16 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  uVar15 = (**(code **)(*param_2 + 0x2d8))(param_2,*(undefined8 *)(*param_2 + 0x2e0));
  iVar7 = FUN_0247a4d4(uVar16,uVar15,*(undefined8 *)puVar3);
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_MoveNext__;
  puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_MoveNext__
  ;
  if (iVar7 != -1) {
    plVar12 = (long *)FUN_0338fba4(lVar8,0);
    uVar15 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
    FUN_0338f5a0(uVar15,0,*(undefined8 *)puVar4,0);
    if (plVar12 == (long *)0x0) goto LAB_0338650c;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
           ) {
          puVar13 = (undefined8 *)(lVar9 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_03386414;
        }
        uVar10 = uVar10 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar10 != 0);
    }
    puVar13 = (undefined8 *)
              FUN_01c72498(plVar12,*(long *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                           ,2);
LAB_03386414:
    (*(code *)*puVar13)(plVar12,uVar15,puVar13[1]);
  }
  return lVar8;
}


