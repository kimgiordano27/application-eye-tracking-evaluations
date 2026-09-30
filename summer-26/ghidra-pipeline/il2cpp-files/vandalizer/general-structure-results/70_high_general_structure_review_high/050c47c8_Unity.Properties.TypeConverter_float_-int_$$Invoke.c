/*
FUNCTION_NAME: Unity.Properties.TypeConverter<float,-int>$$Invoke
ENTRY_POINT: 050c47c8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_13;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


undefined8 Unity_Properties_TypeConverter<float,_int>__Invoke(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  int *piVar12;
  short *psVar13;
  undefined8 *puVar14;
  long *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x22;
  
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(param_1,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x28) + 0x20,0);
  uVar7 = FUN_05e19a88(uVar5,uVar6,0);
  if ((uVar7 & 1) != 0) {
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                        &stack0x0000000c);
    if (plVar9 == (long *)0x0)
    goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
    if (*(long *)(*plVar9 + 0x40) == *(long *)(*(long *)(unaff_x22 + 0x28) + 0x40)) {
      pcVar10 = (char *)thunk_FUN_0322f29c();
      puVar4 = PTR_DAT_075d9ed0;
      cVar2 = *pcVar10;
      lVar8 = *(long *)PTR_DAT_075d9ed0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar8 = *(long *)puVar4;
      }
      lVar11 = *unaff_x19;
      puVar14 = *(undefined8 **)(lVar8 + 0xb8) + 1;
      if (cVar2 != '\0') {
        puVar14 = *(undefined8 **)(lVar8 + 0xb8);
      }
      bVar3 = *(byte *)(lVar11 + 0x135);
      uVar5 = *puVar14;
joined_r0x050c487c:
      if ((bVar3 & 1) == 0) {
        lVar11 = FUN_0322bef4();
      }
      uVar5 = FUN_03e4356c(uVar5,*(undefined8 *)(*(long *)(lVar11 + 0xc0) + 0x50));
      return uVar5;
    }
LAB_050c5130:
                    /* WARNING: Subroutine does not return */
    FUN_031f2730();
  }
  lVar8 = *unaff_x19;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0322bef4();
  }
  uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
  if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite(*(long *)(unaff_x22 + 0xe0));
  }
  uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
  uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x48) + 0x20,0);
  uVar7 = FUN_05e19a88(uVar5,uVar6,0);
  if ((uVar7 & 1) == 0) {
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x50) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x50) + 0x40))
      goto LAB_050c5130;
      piVar12 = (int *)thunk_FUN_0322f29c();
      if (*piVar12 == 0) goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x18) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x18) + 0x40))
      goto LAB_050c5130;
      pcVar10 = (char *)thunk_FUN_0322f29c();
      if (*pcVar10 == '\0') goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x30) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x30) + 0x40))
      goto LAB_050c5130;
      pcVar10 = (char *)thunk_FUN_0322f29c();
      if (*pcVar10 == '\0') goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x88) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x88) + 0x40))
      goto LAB_050c5130;
      psVar13 = (short *)thunk_FUN_0322f29c();
      if (*psVar13 == 0) goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x68) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x68) + 0x40))
      goto LAB_050c5130;
      plVar9 = (long *)thunk_FUN_0322f29c();
      if (*plVar9 == 0) goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x70) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x70) + 0x40))
      goto LAB_050c5130;
      plVar9 = (long *)thunk_FUN_0322f29c();
      if (*plVar9 == 0) goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x38) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x38) + 0x40))
      goto LAB_050c5130;
      psVar13 = (short *)thunk_FUN_0322f29c();
      if (*psVar13 == 0) goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x40) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x40) + 0x40))
      goto LAB_050c5130;
      psVar13 = (short *)thunk_FUN_0322f29c();
      if (*psVar13 == 0) goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x58) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x58) + 0x40))
      goto LAB_050c5130;
      plVar9 = (long *)thunk_FUN_0322f29c();
      if (*plVar9 == 0) goto LAB_050c5070;
    }
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    uVar5 = *(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x48);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite
                (*(long *)(unaff_x22 + 0xe0));
    }
    uVar5 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(uVar5,0);
    uVar6 = Newtonsoft_Json_Bson_BsonWriter__WriteRegex(*(long *)(unaff_x22 + 0x60) + 0x20,0);
    uVar7 = FUN_05e19a88(uVar5,uVar6,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *unaff_x19;
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0322bef4();
      }
      plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                          &stack0x0000000c);
      if (plVar9 == (long *)0x0)
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
      if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x60) + 0x40))
      goto LAB_050c5130;
      puVar14 = (undefined8 *)thunk_FUN_0322f29c();
      uVar7 = FUN_05e5b888(0,*puVar14,0);
      if ((uVar7 & 1) != 0) {
LAB_050c5070:
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0322bef4();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0322bef4();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
          Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        }
        lVar8 = *unaff_x19;
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0322bef4();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_0322bef4();
        }
        return **(undefined8 **)(lVar8 + 0xb8);
      }
    }
  }
  else {
    lVar8 = *unaff_x19;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0322bef4();
    }
    plVar9 = (long *)thunk_FUN_0322ed78(*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x28),
                                        &stack0x0000000c);
    if (plVar9 == (long *)0x0) {
Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(long *)(*plVar9 + 0x40) != *(long *)(*(long *)(unaff_x22 + 0x48) + 0x40))
    goto LAB_050c5130;
    piVar12 = (int *)thunk_FUN_0322f29c();
    puVar4 = PTR_DAT_075d9ed0;
    uVar1 = *piVar12 + 1;
    if (uVar1 < 10) {
      lVar8 = *(long *)PTR_DAT_075d9ed0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
        lVar8 = *(long *)puVar4;
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
      if (lVar8 != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_031f2398();
        }
        lVar11 = *unaff_x19;
        uVar5 = *(undefined8 *)(lVar8 + (ulong)uVar1 * 8 + 0x20);
        bVar3 = *(byte *)(lVar11 + 0x135);
        goto joined_r0x050c487c;
      }
      goto Unity_Properties_TypeConverter<StyleBackgroundPosition,_Int32Enum>___ctor;
    }
  }
  lVar8 = *unaff_x19;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0322bef4();
  }
  if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0x135) & 1) == 0) {
    FUN_0322bef4();
  }
  uVar5 = thunk_FUN_0322f148();
  lVar8 = *unaff_x19;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0322bef4(lVar8);
  }
  FUN_05101f20(uVar5,unaff_w20,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x58));
  return uVar5;
}


