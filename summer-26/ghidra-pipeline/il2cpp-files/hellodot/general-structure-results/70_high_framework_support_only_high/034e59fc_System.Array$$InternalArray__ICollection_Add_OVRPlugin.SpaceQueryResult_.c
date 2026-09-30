/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Add<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 034e59fc
PROGRAM: hellodot-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte System_Array__InternalArray__ICollection_Add<OVRPlugin_SpaceQueryResult>(void)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x23;
  undefined8 uVar8;
  long *unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  
  uVar2 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag();
  if ((uVar2 & 1) == 0) {
    uVar8 = *(undefined8 *)*unaff_x28;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
    uVar8 = FUN_04f3fb68(uVar8,0);
    uVar5 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065de108,0);
    uVar2 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar8,uVar5,0);
    if ((uVar2 & 1) == 0) {
      uVar8 = *(undefined8 *)*unaff_x28;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      uVar8 = FUN_04f3fb68(uVar8,0);
      uVar5 = FUN_04f3fb68(*(undefined8 *)PTR_DAT_065de110,0);
      uVar2 = Newtonsoft_Json_Schema_JsonSchemaGenerator__HasFlag(uVar8,uVar5,0);
      if ((uVar2 & 1) == 0) {
        uVar8 = *(undefined8 *)PTR_DAT_065de120;
        if (*(int *)(*unaff_x26 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar8 = FUN_04f3fb68(uVar8,0);
        uVar5 = FUN_04f3fb68(*(undefined8 *)*unaff_x28,0);
        if (*(int *)(*unaff_x27 + 0xe0) == 0) {
          thunk_FUN_02cd038c();
        }
        uVar2 = FUN_05e9cc84(uVar8,uVar5,0);
        if ((uVar2 & 1) == 0) {
          uVar8 = *(undefined8 *)*unaff_x28;
          lVar7 = thunk_FUN_02c7737c(PTR_DAT_065c89e8);
          if (*(int *)(lVar7 + 0xe0) == 0) {
            thunk_FUN_02cd038c();
          }
          plVar3 = (long *)FUN_04f3fb68(uVar8,0);
          if (plVar3 == (long *)0x0) {
            uVar8 = thunk_FUN_02c7737c(PTR_DAT_065de138);
            uVar5 = 0;
          }
          else {
            uVar8 = thunk_FUN_02c7737c(PTR_DAT_065de138);
            uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          }
          uVar6 = thunk_FUN_02c7737c(PTR_DAT_065dd538);
          uVar8 = FUN_04db9398(uVar8,uVar5,uVar6,0);
          thunk_FUN_02c7737c(PTR_DAT_065c8580);
          uVar5 = thunk_FUN_02cea894();
          FUN_04f68668(uVar5,uVar8,0);
                    /* WARNING: Subroutine does not return */
          FUN_02ce7b54(uVar5);
        }
        FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
        uVar8 = FUN_05e97d48();
        bVar1 = FUN_034e4108(uVar8,*(undefined8 *)(*unaff_x28 + 0x10));
        goto LAB_034e636c;
      }
      FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
      uVar8 = FUN_05e97d48();
      uVar2 = FUN_04f74060(uVar8,0,0);
      if ((uVar2 & 1) != 0) goto LAB_034e5d9c;
      plVar3 = (long *)FUN_05e9b54c(uVar8,0);
      lVar7 = *(long *)(*unaff_x28 + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02ce0978(lVar7);
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(long *)(*plVar3 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar3);
      }
      pcVar4 = (char *)thunk_FUN_02cea9e8(plVar3);
    }
    else {
      FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
      uVar8 = FUN_05e97d48();
      uVar2 = FUN_04f74060(uVar8,0,0);
      if ((uVar2 & 1) != 0) {
LAB_034e5d9c:
        bVar1 = 0;
        goto LAB_034e636c;
      }
      plVar3 = (long *)FUN_05e9caf8(uVar8,0);
      lVar7 = *(long *)(*unaff_x28 + 8);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02ce0978(lVar7);
      }
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      if (*(long *)(*plVar3 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(plVar3);
      }
      pcVar4 = (char *)thunk_FUN_02cea9e8(plVar3);
    }
  }
  else {
    FUN_05e98c24(*(undefined8 *)(unaff_x23 + 0x10),0);
    plVar3 = (long *)FUN_05e97dc0();
    lVar7 = *(long *)(*unaff_x28 + 8);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02ce0978(lVar7);
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
    if (*(long *)(*plVar3 + 0x40) != *(long *)(lVar7 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce8018(plVar3);
    }
    pcVar4 = (char *)thunk_FUN_02cea9e8(plVar3);
  }
  bVar1 = *pcVar4 != '\0';
LAB_034e636c:
  thunk_FUN_05e8e510();
  if (*(long *)(*(long *)(unaff_x29 + -0x18) + 0x28) == *(long *)(unaff_x29 + -8)) {
    return bVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


