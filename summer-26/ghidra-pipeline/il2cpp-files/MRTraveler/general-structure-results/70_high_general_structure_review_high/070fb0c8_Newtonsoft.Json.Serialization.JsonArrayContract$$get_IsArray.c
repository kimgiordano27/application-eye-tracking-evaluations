/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonArrayContract$$get_IsArray
ENTRY_POINT: 070fb0c8
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonArrayContract__get_IsArray(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *unaff_x19;
  int unaff_w20;
  int *unaff_x21;
  undefined4 *puVar4;
  int unaff_w23;
  ulong unaff_x24;
  int unaff_w26;
  int unaff_w27;
  
  if (unaff_w20 < unaff_w26) {
    iVar3 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_0470d560();
    puVar4 = puVar1;
    if ((unaff_x24 & 1) == 0) {
      puVar4 = (undefined4 *)((long)puVar1 + 2);
      *(undefined2 *)puVar1 = 0x7b;
    }
    if (unaff_w23 == 0) {
      FUN_070fadc8(puVar4,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_070fadc8(puVar4 + 2,*unaff_x21 >> 8);
      if (unaff_w27 == 0) {
        puVar1 = puVar4 + 4;
      }
      else {
        puVar1 = (undefined4 *)((long)puVar4 + 0x12);
        *(undefined2 *)(puVar4 + 4) = 0x2d;
      }
      FUN_070fadc8(puVar1,(int)(short)unaff_x21[1] >> 8);
      if (unaff_w27 == 0) {
        puVar4 = puVar1 + 2;
      }
      else {
        puVar4 = (undefined4 *)((long)puVar1 + 10);
        *(undefined2 *)(puVar1 + 2) = 0x2d;
      }
      FUN_070fadc8(puVar4,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      if (unaff_w27 == 0) {
        puVar1 = puVar4 + 2;
      }
      else {
        puVar1 = (undefined4 *)((long)puVar4 + 10);
        *(undefined2 *)(puVar4 + 2) = 0x2d;
      }
      FUN_070fadc8(puVar1,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      if (unaff_w27 == 0) {
        puVar2 = puVar1 + 2;
      }
      else {
        puVar2 = (undefined4 *)((long)puVar1 + 10);
        *(undefined2 *)(puVar1 + 2) = 0x2d;
      }
      FUN_070fadc8(puVar2,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      FUN_070fadc8(puVar2 + 2,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      FUN_070fadc8(puVar2 + 4,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar2 = puVar2 + 6;
    }
    else {
      *puVar4 = 0x780030;
      FUN_070fadc8(puVar4 + 1,*unaff_x21 >> 0x18,*unaff_x21 >> 0x10);
      FUN_070fadc8(puVar4 + 3,*unaff_x21 >> 8);
      puVar4[5] = 0x30002c;
      *(undefined2 *)(puVar4 + 6) = 0x78;
      FUN_070fadc8((undefined2 *)((long)puVar4 + 0x1a),(int)(short)unaff_x21[1] >> 8);
      *(undefined4 *)((long)puVar4 + 0x22) = 0x30002c;
      *(undefined2 *)((long)puVar4 + 0x26) = 0x78;
      FUN_070fadc8(puVar4 + 10,(int)*(short *)((long)unaff_x21 + 6) >> 8);
      puVar4[0xc] = 0x7b002c;
      FUN_070fae44(puVar4 + 0xd,(char)unaff_x21[2],*(undefined1 *)((long)unaff_x21 + 9));
      *(undefined2 *)((long)puVar4 + 0x46) = 0x2c;
      FUN_070fae44(puVar4 + 0x12,*(undefined1 *)((long)unaff_x21 + 10),
                   *(undefined1 *)((long)unaff_x21 + 0xb));
      *(undefined2 *)((long)puVar4 + 0x5a) = 0x2c;
      FUN_070fae44(puVar4 + 0x17,(char)unaff_x21[3],*(undefined1 *)((long)unaff_x21 + 0xd));
      *(undefined2 *)((long)puVar4 + 0x6e) = 0x2c;
      FUN_070fae44(puVar4 + 0x1c,*(undefined1 *)((long)unaff_x21 + 0xe),
                   *(undefined1 *)((long)unaff_x21 + 0xf));
      puVar2 = puVar4 + 0x21;
      *(undefined2 *)((long)puVar4 + 0x82) = 0x7d;
    }
    iVar3 = unaff_w26;
    if ((unaff_x24 & 1) == 0) {
      *(undefined2 *)puVar2 = 0x7d;
    }
  }
  *unaff_x19 = iVar3;
  return unaff_w26 <= unaff_w20;
}


