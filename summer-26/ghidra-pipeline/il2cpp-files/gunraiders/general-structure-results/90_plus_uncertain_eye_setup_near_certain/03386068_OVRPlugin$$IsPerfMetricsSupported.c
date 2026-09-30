/*
FUNCTION_NAME: OVRPlugin$$IsPerfMetricsSupported
ENTRY_POINT: 03386068
PROGRAM: gunraiders-libil2cpp.so
SCORE: 122
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_7;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin__IsPerfMetricsSupported(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar14;
  undefined8 uVar15;
  
  FUN_03386510();
  puVar2 = Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_Dispose__;
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_Dispose__;
  puVar4 = UnityEngine_Splines_InterpolatorUtility_TypeInfo;
  if (unaff_x19 == 0) goto LAB_0338650c;
  cVar1 = *(char *)((long)unaff_x21 + 0x26);
  uVar14 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(int *)(*(long *)UnityEngine_Splines_InterpolatorUtility_TypeInfo + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar5 = 
  Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_Dispose__
  ;
  uVar6 = FUN_033a7280(uVar14,cVar1 != '\0',0);
  *(undefined4 *)(unaff_x19 + 0xbc) = uVar6;
  uVar15 = *(undefined8 *)(unaff_x19 + 0xd8);
  uVar14 = (**(code **)(*unaff_x21 + 0x268))();
  FUN_0230a718(uVar15,uVar14,*(undefined8 *)puVar3);
  lVar8 = FUN_0236e9d4(*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)puVar2);
  if (lVar8 == 0) {
LAB_033861b4:
    lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    uVar14 = FUN_02b6841c();
  }
  else {
    *(undefined8 *)(unaff_x19 + 200) = *(undefined8 *)(lVar8 + 0x5c);
    *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(lVar8 + 100);
    puVar2 = PTR_DAT_0422fb28;
    *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(lVar8 + 0x54);
    uVar14 = *(undefined8 *)(lVar8 + 0x40);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar9 = FUN_032ea0d4(uVar14,0,0);
    if ((uVar9 & 1) == 0) goto LAB_033861b4;
    lVar10 = thunk_FUN_01c496e0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary_Enumerator<uint,_uint>_Dispose__
                               );
    FUN_0338c8b4(lVar10,0);
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar14 = FUN_033a76dc(lVar8,0);
    if (lVar10 == 0) goto LAB_0338650c;
    *(undefined8 *)(lVar10 + 0x10) = uVar14;
    lVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
    uVar14 = FUN_02b6841c(lVar8,lVar10,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_get_Current__
                          ,0);
    if (lVar8 == 0) goto LAB_033861b4;
  }
  *(long *)(unaff_x19 + 0xf0) = lVar8;
  puVar2 = System_Linq_Expressions_InvocationExpressionN_TypeInfo;
  if (*(char *)(unaff_x19 + 0x2a) != '\0') {
    uVar14 = FUN_03386750(uVar14,*(undefined8 *)(unaff_x19 + 0x18));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8(*(long *)puVar2);
    }
    uVar9 = FUN_0320e6fc(uVar14,0,0);
    if ((uVar9 & 1) == 0) {
      if (*(int *)(unaff_x19 + 0xbc) == 2) {
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar9 = FUN_033a7cb8(0);
        if ((uVar9 & 1) != 0) {
          uVar14 = thunk_FUN_01c496e0(*(undefined8 *)
                                       Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_get_Current__
                                     );
          FUN_02b623a8();
          *(undefined8 *)(unaff_x19 + 0x80) = uVar14;
        }
      }
      else if ((*(long *)(unaff_x19 + 0x80) == 0) || (*(char *)(unaff_x19 + 0x88) != '\0')) {
        uVar14 = FUN_03386c3c(uVar9,*(undefined8 *)(unaff_x19 + 0x18));
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8(*(long *)puVar2);
        }
        uVar9 = FUN_0320e6fc(uVar14,0,0);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          plVar11 = (long *)FUN_033a78fc(0);
          if (plVar11 == (long *)0x0) goto LAB_0338650c;
          uVar14 = (**(code **)(*plVar11 + 0x188))(plVar11,uVar14,*(undefined8 *)(*plVar11 + 400));
          *(undefined8 *)(unaff_x19 + 0x108) = uVar14;
          goto OVRPlugin__GetPerfMetricsInt;
        }
      }
      else {
        if (*(long *)(unaff_x19 + 0x18) == 0) goto LAB_0338650c;
        uVar9 = FUN_032eb44c(*(long *)(unaff_x19 + 0x18),0);
        if ((uVar9 & 1) != 0) {
          uVar14 = FUN_03386c84();
          if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)puVar2);
          }
          uVar9 = FUN_0320e6fc(uVar14,0,0);
          if ((uVar9 & 1) != 0) goto LAB_0338621c;
        }
      }
    }
    else {
LAB_0338621c:
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      plVar11 = (long *)FUN_033a78fc(0);
      if (plVar11 == (long *)0x0) goto LAB_0338650c;
      uVar14 = (**(code **)(*plVar11 + 0x188))(plVar11,uVar14,*(undefined8 *)(*plVar11 + 400));
      *(undefined8 *)(unaff_x19 + 0x100) = uVar14;
OVRPlugin__GetPerfMetricsInt:
      uVar14 = FUN_03392404();
      uVar15 = (**(code **)(*unaff_x21 + 0x1b8))();
      FUN_0230a718(uVar14,uVar15,*(undefined8 *)puVar3);
    }
  }
  puVar4 = Method_System_Collections_Generic_List_Enumerator<TranslationJob>_MoveNext__;
  uVar14 = FUN_03386f38();
  uVar9 = FUN_032106f8(uVar14,0,0);
  if ((uVar9 & 1) != 0) {
    if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_033870f4();
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
  }
  puVar3 = UnityEngine_UI_ReflectionMethodsCache_Raycast2DCallback_var;
  if (unaff_x20 == (long *)0x0) {
LAB_0338650c:
                    /* WARNING: Subroutine does not return */
    FUN_01c5d4a4();
  }
  uVar15 = *(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
  uVar14 = (**(code **)(*unaff_x20 + 0x2d8))();
  iVar7 = FUN_0247a4d4(uVar15,uVar14,*(undefined8 *)puVar3);
  puVar3 = Method_System_Collections_Generic_Dictionary_Enumerator<uint,_Material>_MoveNext__;
  puVar4 = Method_System_Collections_Generic_Dictionary_Enumerator<Type,_VolumeComponent>_MoveNext__
  ;
  if (iVar7 != -1) {
    plVar11 = (long *)FUN_0338fba4();
    uVar14 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
    FUN_0338f5a0(uVar14,0,*(undefined8 *)puVar4,0);
    if (plVar11 == (long *)0x0) goto LAB_0338650c;
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) ==
            *(long *)
             Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
           ) {
          puVar12 = (undefined8 *)(lVar8 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_03386414;
        }
        uVar9 = uVar9 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar9 != 0);
    }
    puVar12 = (undefined8 *)
              FUN_01c72498(plVar11,*(long *)
                                    Method_System_Collections_Generic_Dictionary_Enumerator<Type,_BinaryStorageBuffer_ISerializationAdapter>_MoveNext__
                           ,2);
LAB_03386414:
    (*(code *)*puVar12)(plVar11,uVar14,puVar12[1]);
  }
  return;
}


